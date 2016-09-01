
#include "ShapeFactory.h"

//mapTypeShapeFactoryByType ShapeFactory::mapShapeTypeByFactory;
//ShapeFactory* ShapeFactory::mInstance = NULL;

ShapeFactory& ShapeFactory::GetShapeFactory()
{
    static ShapeFactory instance;
    return instance;
}

Shape * ShapeFactory::CreateShape(ShapeType type)
{
    if (mapShapeTypeByFactory.find(type) != mapShapeTypeByFactory.end())
        return mapShapeTypeByFactory[type]->Create();
    else
        return nullptr;
}

void ShapeFactory::RegisterFactory(ShapeType type, ShapeFactory * factory)
{
    mapShapeTypeByFactory[type] = factory;
}


