#pragma once
#include "Shape.h"
#include <iostream>

using namespace std;

class Rectangle : public Shape
{
public:
    Rectangle();
    virtual ~Rectangle();
    virtual ShapeType GetType() { return Type_Rectangle; }
private:
    float values[3];
};
