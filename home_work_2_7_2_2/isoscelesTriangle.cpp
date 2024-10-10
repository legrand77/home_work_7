#include <iostream>
#include <string>
#include "figura.h"
#include "isoscelesTriangle.h"
#include "triangle.h"

    isoscelesTriangle::isoscelesTriangle(int a, int b, int А, int В)
    {
        name = { "Равнобедренный треугольник " };
        line_a = a;
        line_b = b;
        line_c = a;
        corner_A = А;
        corner_B = В;
        corner_C = А;
    }
    bool isoscelesTriangle::error()
    {
        return(!((line_a == line_c) && (corner_A == corner_C)) || (triangle::error()));
    }
    std::string isoscelesTriangle::errorText()
    {
        if ((triangle::error()) and !((line_a = line_c) && (corner_A = corner_C)))
        {
            return std::string("Ошибка создания фигуры. Причина: сторона а не равна  стороне с или угол А не равен углу С и сумма углов не равна 180 ");
        }
        else if (triangle::error()) { return std::string("Ошибка создания фигуры. Причина: сумма углов не равна 180 "); }
        else { return std::string("Ошибка создания фигуры.сторона а не равна  стороне с или угол А не равен углу С"); }
    }