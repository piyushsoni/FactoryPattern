
#include "Circle.h"
#include "ShapeFactory.h"

REGISTER_CLASS(Circle)

Circle::Circle()
{
    cout << "The factory created new Circle! \n";
}

Circle::~Circle()
{
    cout << "The Circle object was destroyed \n";
}

