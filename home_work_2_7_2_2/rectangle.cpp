#include "figura.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include <iostream>
#include <string>
#include "quadrilateral.h"
#include "exceptionFigure.h"

rectangle::rectangle(int a, int b)
{
    name = { "Прямоугольник " };
    line_a = a;
    line_b = b;
    line_c = a;
    line_d = b;
    corner_A = 90;
    corner_B = 90;
    corner_C = 90;
    corner_D = 90;
    if (rectangle::error()) throw exceptionFigure(rectangle::errorText());
}
bool rectangle::error()
{
    return(!((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (corner_B == corner_D) && (corner_B == 90)) || (quadrilateral::error()));
}
std::string rectangle::errorText()
{
    if ((quadrilateral::error()) and (!((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (corner_B == corner_D) && (corner_B == 90))))
    {
        return std::string("Ошибка создания фигуры. Причина: угол С не равен 90 градусов или стороны попарно не равны  и сумма углов не равна 360 ");
    }
    else if (quadrilateral::error()) { return std::string("Ошибка создания фигуры. Причина: сумма углов не равна 360 "); }
    else { return std::string("Ошибка создания фигуры. Причина: угол С не равен 90 градусов или стороны попарно не равны"); }
}