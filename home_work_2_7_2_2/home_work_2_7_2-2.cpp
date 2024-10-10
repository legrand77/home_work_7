
#include <iostream>
#include <string>
#include "equilateralTriangle.h"
#include "figura.h"
#include "isoscelesTriangle.h"
#include "parallelogram.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "rhomb.h"
#include "square.h"
#include "straighTriangle.h"
#include "triangle.h"
#include "print_info.h"
#include "exceptionFigure.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    figura* figury[10]{};
    try // ожидание исключения
    {
        figury[0] = new triangle;
        print_info(figury[0]);
        figury[1] = new straighTriangle;
        print_info(figury[1]);
        figury[2] = new isoscelesTriangle;
        print_info(figury[2]);
        figury[3] = new equilateralTriangle;
        print_info(figury[3]);
        figury[4] = new quadrilateral;
        print_info(figury[4]);
        figury[5] = new rectangle;
        print_info(figury[5]);
        figury[6] = new square;
        print_info(figury[6]);
        figury[7] = new parallelogram;
        print_info(figury[7]);
        figury[8] = new rhomb;
        print_info(figury[8]);
    }
    catch (const exceptionFigure& error) // обработка ошибок, сязанных с exceptionFigure
    {
        for (int i = 0; i < 9; i++)
        {
            delete figury[i];
        }
        std::cout << error.what();
    }
    catch (...)   // обработка остальных исключений
    {
        std::cout << "Неизвестная ошибка" << std::endl;
    }
}
    /*
   for (int i = 0; i < 9; i++)
    {
       print_info(figury[i]);
       std::cout << std::endl;      
    }

    for (int i = 0; i < 9; i++)
    {
        delete figury[i];
    }
}*/
/*try // ожидание исключения
{
    if (e->error())
    {
        e->printBadge();
        throw exceptionFigure(e->errorText()); // исключение
    }
    else
    {
        e->printBadge();
        std::cout << "создан" << std::endl;
    }
}
catch (const exceptionFigure& error) // обработка ошибок, сязанных с exceptionFigure
{
    std::cout << error.what();
}
catch (...)   // обработка остальных исключений
{
    std::cout << "Неизвестная ошибка" << std::endl;
}*/