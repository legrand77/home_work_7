#include "triangle.h"
#include "figura.h"
#include "straighTriangle.h"
#include <iostream>
#include <string>

    straighTriangle::straighTriangle(int a, int b, int c, int �, int �)
    {
        name = { "������������� ����������� " };
        line_a = a;
        line_b = b;
        line_c = c;
        corner_A = �;
        corner_B = �;
        corner_C = 90;
    }
    bool straighTriangle::error()
    {
        return((corner_C != 90) || (triangle::error()));
    }
    std::string straighTriangle::errorText()
    { if ((triangle::error()) and (corner_C != 90))
    {
        return std::string("������ �������� ������. �������: ���� � �� ����� 90 �������� � ����� ����� �� ����� 180 ");
    }
    else if (triangle::error()) { return std::string("������ �������� ������. �������: ����� ����� �� ����� 180 "); }
    else { return std::string("������ �������� ������. �������: ���� � �� ����� 90 ��������"); }
    }
