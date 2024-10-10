#include <iostream>
#include <string>
#include "figura.h"
#include "quadrilateral.h"
#include "square.h"

    square::square(int a)
    {
        name = { "Квадрат " };
        line_a = a;
        line_b = a;
        line_c = a;
        line_d = a;
        corner_A = 90;
        corner_B = 90;
        corner_C = 90;
        corner_D = 90;
    }
    bool square::error()
    {
        return(!((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (line_a == line_d) && (corner_B == corner_D) && (corner_B == 90)) || (quadrilateral::error()));
    }
    std::string square::errorText()
    {
        if ((quadrilateral::error()) and (!((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (line_a == line_d) && (corner_B == corner_D) && (corner_B == 90))))
        {
            return std::string("Ошибка создания фигуры. Причина: все углы  не равны 90 градусов или все стороны не равны и угол С не равен 90 градусов и сумма углов не равна 360 ");
        }
        else if (quadrilateral::error()) { return std::string("Ошибка создания фигуры. Причина: сумма углов не равна 360 "); }
        else { return std::string("Ошибка создания фигуры. Причина: все углы  не равны 90 градусов или все стороны не равны"); }
    }