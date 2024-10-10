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
    figury[0] = new triangle;
    figury[1] = new straighTriangle;
    figury[2] = new isoscelesTriangle;
    figury[3] = new equilateralTriangle;
    figury[4] = new quadrilateral;
    figury[5] = new rectangle;
    figury[6] = new square;
    figury[7] = new parallelogram;
    figury[8] = new rhomb;

   for (int i = 0; i < 9; i++)
    {        
       print_info(figury[i]);
       std::cout << std::endl;      
    }

    for (int i = 0; i < 9; i++)
    {
        delete figury[i];
    }
}
