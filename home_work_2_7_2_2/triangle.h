#pragma once
#include "figura.h"
struct triangle : public figura
{
protected:
    triangle(int a, int b, int c, int À, int Â, int C);

public:
    
    triangle():triangle(10, 20, 30, 50, 60, 70) {};
    bool error() override;
    std::string errorText() override;
 };
