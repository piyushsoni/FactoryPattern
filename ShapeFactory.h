#pragma once

#include <map>
using namespace std;

#include "Shape.h"

#define REGISTER_CLASS(objectClass) static DerivedFactory<objectClass> shape##objectClass(Type_ ## objectClass);

class Shape;
class ShapeFactory;
typedef map<ShapeType, ShapeFactory*> mapTypeShapeFactoryByType;

class ShapeFactory
{
private:
    mapTypeShapeFactoryByType mapShapeTypeByFactory;
protected:
    ShapeFactory() {}
    virtual Shape* Create() { return NULL; }
private:
    ShapeFactory(const ShapeFactory&);
public:
    virtual ~ShapeFactory() {}
    static ShapeFactory& GetShapeFactory();

    Shape* CreateShape(ShapeType type);

    virtual void DestroyShape(Shape* object) { delete object; object = nullptr; }
    void RegisterFactory(ShapeType type, ShapeFactory* factory);
};

template<typename ShapeClass>
class DerivedFactory : public ShapeFactory
{
public:
    DerivedFactory(ShapeType type)
    {
        ShapeFactory::GetShapeFactory().RegisterFactory(type, this);
    }
    ~DerivedFactory() {}
    Shape* Create() { return new ShapeClass(); }
};
