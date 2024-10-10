#include "triangle.h"
#include "figura.h"
#include "straighTriangle.h"
#include <iostream>
#include <string>
#include "exceptionFigure.h"

    straighTriangle::straighTriangle(int a, int b, int c, int А, int В)
    {
        
        name = { "Прямоугольный треугольник " };
        line_a = a;
        line_b = b;
        line_c = c;
        corner_A = А;
        corner_B = В;
        corner_C = 90;
        if (straighTriangle::error()) throw exceptionFigure(straighTriangle::errorText());
    }
    bool straighTriangle::error()
    {
        return((corner_C != 90) || (triangle::error()));
    }
    std::string straighTriangle::errorText()
    { if ((triangle::error()) and (corner_C != 90))
    {
        return std::string("Ошибка создания фигуры. Причина: угол С не равен 90 градусов и сумма углов не равна 180 ");
    }
    else if (triangle::error()) { return std::string("Ошибка создания фигуры. Причина: сумма углов не равна 180 "); }
    else { return std::string("Ошибка создания фигуры. Причина: угол С не равен 90 градусов"); }
    }
