#pragma once
#include "Shape.h"
#include <iostream>

using namespace std;

class Circle : public Shape
{
public:
    Circle();
    virtual ~Circle();
    virtual ShapeType GetType() { return Type_Circle; }

private:
    float direction[3];
};
