#include <iostream>
#include <string>
#include "figura.h"
#include "isoscelesTriangle.h"
#include "triangle.h"

    isoscelesTriangle::isoscelesTriangle(int a, int b, int �, int �)
    {
        name = { "�������������� ����������� " };
        line_a = a;
        line_b = b;
        line_c = a;
        corner_A = �;
        corner_B = �;
        corner_C = �;
    }
    bool isoscelesTriangle::error()
    {
        return(!((line_a == line_c) && (corner_A == corner_C)) || (triangle::error()));
    }
    std::string isoscelesTriangle::errorText()
    {
        if ((triangle::error()) and !((line_a = line_c) && (corner_A = corner_C)))
        {
            return std::string("������ �������� ������. �������: ������� � �� �����  ������� � ��� ���� � �� ����� ���� � � ����� ����� �� ����� 180 ");
        }
        else if (triangle::error()) { return std::string("������ �������� ������. �������: ����� ����� �� ����� 180 "); }
        else { return std::string("������ �������� ������.������� � �� �����  ������� � ��� ���� � �� ����� ���� �"); }
    }