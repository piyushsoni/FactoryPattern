
#include "Rectangle.h"
#include "ShapeFactory.h"

//static DerivedFactory<Rectangle> RectangleObject(Type_Rectangle);
REGISTER_CLASS(Rectangle);

Rectangle::Rectangle()
{
    cout << "The factory created new Rectangle! \n";
}

Rectangle::~Rectangle()
{
    cout << "The Rectangle object was destroyed \n";
}

