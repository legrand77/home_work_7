#include <iostream>
#include <string>
#include "figura.h"
#include "quadrilateral.h"
#include "rhomb.h"

    rhomb::rhomb(int a, int А, int В)
    {
        name = { "Ромб " };
        line_a = a;
        line_b = a;
        line_c = a;
        line_d = a;
        corner_A = А;
        corner_B = В;
        corner_C = А;
        corner_D = В;
    }
    bool rhomb::error()
    {
        return(!((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (line_a == line_d) && (corner_B == corner_D)) || (quadrilateral::error()));
    }
    std::string rhomb::errorText()
    {
        if ((quadrilateral::error()) and (!((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (line_a == line_d) && (corner_B == corner_D))))
        {
            return std::string("Ошибка создания фигуры. Причина: стороны не равны или углы попарно не равны и сумма углов не равна 360 ");
        }
        else if (quadrilateral::error()) { return std::string("Ошибка создания фигуры. Причина: сумма углов не равна 360 "); }
        else { return std::string("Ошибка создания фигуры. стороны не равны или углы попарно не равны"); }
    }