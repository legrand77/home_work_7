#include <iostream>
#include <string>
#include "equilateralTriangle.h"
#include "figura.h"
#include "triangle.h"

    equilateralTriangle :: equilateralTriangle(int a, int �)
    {
        name = { "�������������� ����������� " };
        line_a = a;
        line_b = a;
        line_c = a;
        corner_A = �;
        corner_B = �;
        corner_C = �;
    }
    bool equilateralTriangle::error()
    {
        return(!(corner_A == corner_C && corner_B == corner_C && line_a == line_b && line_c == line_b) || (triangle::error()));
    }
    std::string equilateralTriangle::errorText()
    {
        if ((triangle::error()) and (!(corner_A == corner_C && corner_B == corner_C && line_a == line_b && line_c == line_b)))
        {
            return std::string("������ �������� ������. �������: ����� ����� �� ����� 180 � �� ����� ����� ����� ������� ��� ���� ");
        }
        else if (triangle::error()) { return std::string("������ �������� ������. �������: ����� ����� �� ����� 180 "); }
        else { return std::string("������ �������� ������. �������: �� ����� ����� ����� ������� ��� ����"); }
    }