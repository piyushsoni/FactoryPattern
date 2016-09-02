#pragma once

#include <string>
using namespace std;

enum ShapeType
{
    Type_Unknown,
    Type_Circle,
    Type_Rectangle,
    Type_Polygon
};

class Shape
{
    std::string name;
public:
    virtual ~Shape() {}
    virtual ShapeType GetType() { return Type_Unknown; }
};
