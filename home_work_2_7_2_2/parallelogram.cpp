#include "parallelogram.h"
#include "quadrilateral.h"




    parallelogram::parallelogram(int a, int b, int А, int В)
    {
        name = { "Параллелограмм " };
        line_a = a;
        line_b = b;
        line_c = a;
        line_d = 100;
        corner_A = А;
        corner_B = В;
        corner_C = А;
        corner_D = В;
    }
    bool parallelogram::error()
    {
        return(!((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (corner_B == corner_D)) || (quadrilateral::error()));
    }
    std::string parallelogram::errorText()
    {
        if ((quadrilateral::error()) and !((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (corner_B == corner_D)))
        {
            return std::string("Ошибка создания фигуры. Причина: угол С не равен 90 градусов и сумма углов не равна 180 и стороны a,c и b,d попарно не равны или углы A,C и B,D попарно  не равны");
        }
        else if (quadrilateral::error()) { return std::string("Ошибка создания фигуры. Причина: сумма углов не равна 360 "); }
        else { return std::string("Ошибка создания фигуры. стороны a,c и b,d попарно не равны или углы A,C и B,D попарно  не равны"); }
    }