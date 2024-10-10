#pragma once
#include "triangle.h"
struct straighTriangle : public triangle
{
private:
    straighTriangle(int a, int b, int c, int À, int Â);

public:
    straighTriangle() : straighTriangle(10, 20, 30, 20, 70) {};
    bool error() override;
    std::string errorText() override;
};