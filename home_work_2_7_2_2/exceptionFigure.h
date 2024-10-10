#pragma once
#include <string>
class exceptionFigure : public std::exception
{
public:
    exceptionFigure(const std::string& message) : message{ message }
    {}
    const char* what() const noexcept override;
private:
    std::string message;    // сообщение об ошибке
};
