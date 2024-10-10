#pragma once
#include <string>
struct figura
{
protected:
    int nSide{};
    std::string name{ "Фигура: " };
    int line_a{};
    int line_b{};
    int line_c{};
    int line_d{};
    int corner_A{};
    int corner_B{};
    int corner_C{};
    int corner_D{};

public:
    virtual void printName();
    virtual void printBadge();
    virtual bool error() ;
    virtual std::string errorText();
  };