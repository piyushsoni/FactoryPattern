
#include "Circle.h"
#include "ShapeFactory.h"

static DerivedFactory<Circle> CircleFactory(Type_Circle);

Circle::Circle()
{
    cout << "The factory created new Circle! \n";
}

Circle::~Circle()
{
    cout << "The Circle object was destroyed \n";
}

