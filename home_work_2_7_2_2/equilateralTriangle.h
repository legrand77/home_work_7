#pragma once
#include "triangle.h"
struct equilateralTriangle : public triangle
{
private:
    equilateralTriangle(int a, int �);
    
public:
    equilateralTriangle() : equilateralTriangle(10, 60) {};
    bool error() override;
    std::string errorText() override;
};