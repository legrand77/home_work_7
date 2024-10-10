#include "parallelogram.h"
#include "quadrilateral.h"




    parallelogram::parallelogram(int a, int b, int �, int �)
    {
        name = { "�������������� " };
        line_a = a;
        line_b = b;
        line_c = a;
        line_d = 100;
        corner_A = �;
        corner_B = �;
        corner_C = �;
        corner_D = �;
    }
    bool parallelogram::error()
    {
        return(!((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (corner_B == corner_D)) || (quadrilateral::error()));
    }
    std::string parallelogram::errorText()
    {
        if ((quadrilateral::error()) and !((line_a == line_c) && (corner_A == corner_C) && (line_b == line_d) && (corner_B == corner_D)))
        {
            return std::string("������ �������� ������. �������: ���� � �� ����� 90 �������� � ����� ����� �� ����� 180 � ������� a,c � b,d ������� �� ����� ��� ���� A,C � B,D �������  �� �����");
        }
        else if (quadrilateral::error()) { return std::string("������ �������� ������. �������: ����� ����� �� ����� 360 "); }
        else { return std::string("������ �������� ������. ������� a,c � b,d ������� �� ����� ��� ���� A,C � B,D �������  �� �����"); }
    }