#pragma once
#include "triangle.h"
struct isoscelesTriangle : public triangle
{
private:
    isoscelesTriangle(int a, int b, int �, int �); 
public:
    isoscelesTriangle() : isoscelesTriangle(10, 20, 60, 60) {};
    bool error() override;
    std::string errorText() override;
};