#pragma once
#include "quadrilateral.h"
struct rectangle : public quadrilateral
{
private:
    rectangle(int a, int b); 
public:
    rectangle() : rectangle(10, 30) {};
    bool error() override;
    std::string errorText() override;
};