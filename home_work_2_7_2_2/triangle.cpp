#include "figura.h"
#include "triangle.h"
#include <iostream>
#include <string>
#include "exceptionFigure.h"


triangle::triangle(int a, int b, int c, int �, int �, int C)
{ 
	nSide = 3;
	name = { "����������� " };
	line_a = a;
	line_b = b;
	line_c = c;
	corner_A = �;
	corner_B = �;
	corner_C = C;
	if (triangle::error()) throw exceptionFigure(triangle::errorText());
};
bool triangle::error()
{
	return!(corner_A + corner_B + corner_C == 180);
}
std::string triangle::errorText()
{
   return std::string("������ �������� ������. �������: ����� ����� �� ����� 180");
}

