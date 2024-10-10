#include "figura.h"
#include "quadrilateral.h"
#include <iostream>
#include <string>

quadrilateral::quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
{
    nSide = 4;
    name = { "Четырехугольник " };
    line_a = a;
    line_b = b;
    line_c = c;
    line_d = d;
    corner_A = A;
    corner_B = B;
    corner_C = C;
    corner_D = D;
}

void quadrilateral::printBadge()
{
    printName();
    std::cout << " (стороны: " << line_a << ", " << line_b << ", " << line_c << ", " << line_d ;
    std::cout << "; углы:  " << corner_A << ", " << corner_B << ", " << corner_C << ", " << corner_D << ") ";

}
bool quadrilateral::error()
{
    return!(corner_A + corner_B + corner_C + corner_D == 360);
}
std::string quadrilateral::errorText()
{
    return std::string("Ошибка создания фигуры. Причина: сумма углов не равна 360");
}
void quadrilateral::printName()
{
    std::cout << name;
}