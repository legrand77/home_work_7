#include "print_info.h"
#include "exceptionFigure.h"
#include <string>
#include <iostream>

void print_info(figura* e) {
    /*try // �������� ����������
    {
        if (e->error())
        {*/
           /* e->printBadge();
           throw exceptionFigure(e->errorText()); // ����������
        }
        else
        {*/
            e->printBadge();
            std::cout << "������" << std::endl;
         /*}
    }
    catch (const exceptionFigure& error) // ��������� ������, �������� � exceptionFigure
    {
        std::cout << error.what() ;
    }
    catch (...)   // ��������� ��������� ����������
    {
        std::cout << "����������� ������" << std::endl;
    }
*/
        
}