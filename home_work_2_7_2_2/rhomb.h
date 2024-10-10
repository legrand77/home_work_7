#pragma once
#include "quadrilateral.h"
struct rhomb : public quadrilateral
{
private:
    rhomb(int a, int �, int �);
    
public:
    rhomb() : rhomb(10, 20, 30) {};
    bool error() override;
    std::string errorText() override;
};