#include "figura.h"
#include <string>
#include <iostream>

 void figura::printName()
{
 std::cout << name;
}
void figura::printBadge()
{
    printName();
    std::cout << " (c������: " << line_a << ", " << line_b << ", " << line_c;
    std::cout << "; ����: " << corner_A << ", " << corner_B << ", " << corner_C << ") ";
}
bool figura::error()
{
    return true;
 };
std::string figura::errorText()
{
    return {" "};
};