#pragma once
#include "figura.h"
struct quadrilateral : public figura
{
protected:
    quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
public:
    quadrilateral() : quadrilateral(10, 20, 30, 50, 60, 70, 57, 45) {}
    void printName() override;;
    void printBadge() override;
    bool error() override;
    std::string errorText() override;
};