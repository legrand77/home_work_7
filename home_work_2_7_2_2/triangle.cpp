#include "figura.h"
#include "triangle.h"
#include <iostream>
#include <string>


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
};
bool triangle::error()
{
	return!(corner_A + corner_B + corner_C == 180);
}
std::string triangle::errorText()
{
   return std::string("������ �������� ������. �������: ����� ����� �� ����� 180");
}

