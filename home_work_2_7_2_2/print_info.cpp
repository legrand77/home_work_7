#include "print_info.h"
#include "exceptionFigure.h"
#include <string>
#include <iostream>

void print_info(figura* e) {
    /*try // ожидание исключения
    {
        if (e->error())
        {*/
           /* e->printBadge();
           throw exceptionFigure(e->errorText()); // исключение
        }
        else
        {*/
            e->printBadge();
            std::cout << "создан" << std::endl;
         /*}
    }
    catch (const exceptionFigure& error) // обработка ошибок, сязанных с exceptionFigure
    {
        std::cout << error.what() ;
    }
    catch (...)   // обработка остальных исключений
    {
        std::cout << "Неизвестная ошибка" << std::endl;
    }
*/
        
}