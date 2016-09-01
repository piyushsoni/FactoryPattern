#include <iostream>
#include <string>
#include <map>
#include "ShapeFactory.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    ShapeFactory *factory = ShapeFactory::GetShapeFactory();
    
    Circle* vec = (Circle*)factory->CreateShape(Type_Circle);
    cout << "Object type is : " << vec->GetType() <<"\n";
    factory->DestroyShape(vec);
    
    Rectangle* con = (Rectangle*)factory->CreateShape(Type_Rectangle);
    cout << "Object type is : " << con->GetType() << "\n";
    factory->DestroyShape(con);



    getchar();
    return 0;
}

