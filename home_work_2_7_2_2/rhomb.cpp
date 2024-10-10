#include <iostream>
#include <string>
#include "figura.h"
#include "quadrilateral.h"
#include "rhomb.h"

    rhomb::rhomb(int a, int �, int �)
    {
        name = { "���� " };
        line_a = a;
        line_b = a;
        line_c = a;
        line_d = a;
        corner_A = �;
        corner_B = �;
        corner_C = �;
        corner_D = �;
    }
    bool rhomb::error()
    {
        return(!((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (line_a == line_d) && (corner_B == corner_D)) || (quadrilateral::error()));
    }
    std::string rhomb::errorText()
    {
        if ((quadrilateral::error()) and (!((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (line_a == line_d) && (corner_B == corner_D))))
        {
            return std::string("������ �������� ������. �������: ������� �� ����� ��� ���� ������� �� ����� � ����� ����� �� ����� 360 ");
        }
        else if (quadrilateral::error()) { return std::string("������ �������� ������. �������: ����� ����� �� ����� 360 "); }
        else { return std::string("������ �������� ������. ������� �� ����� ��� ���� ������� �� �����"); }
    }