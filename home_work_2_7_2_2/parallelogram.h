#pragma once
#include "quadrilateral.h"
struct parallelogram : public quadrilateral
{
private:
    parallelogram(int a, int b, int À, int Â);
public:
    parallelogram() : parallelogram(30, 40, 100, 80) {};
    bool error() override;
    std::string errorText() override;
};