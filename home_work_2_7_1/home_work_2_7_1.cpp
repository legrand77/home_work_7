
#include <iostream>
#include <string>
class str_error : public std::exception
{
public:
    str_error(const std::string& message) : message{message}
    {}
    const char* what() const noexcept override
    {
        return message.c_str();     // получаем из std::string строку const char*
    }
private:
    std::string message;    // сообщение об ошибке
};

class functionStr
{
public:
    
     functionStr(std::string str, int forbidden_length)
    {
        if (forbidden_length == str.length())    // если длина равна значению переданного параметра
            throw str_error("Вы ввели слово запретной длины! До свидания"); // исключение
        this->str = str;
        this->forbidden_length = forbidden_length;
    }
    void print() const
    {
        std::cout << "Длина слова " << str << " равна " << str.length() << std::endl;
    }
private:
    std::string str;
    int forbidden_length;
};

void word(std::string str, int forbidden_length)
{
    try // ожидание исключения
    {
        functionStr word{str, forbidden_length };  // создаем один объект  functionStr
        word.print();
    }
    catch (const str_error& error) // обработка ошибок, сязанных с functionStr
    {
        std::cout << error.what() << std::endl;
    }
    catch (...)   // обработка остальных исключений
    {
        std::cout << "Неизвестная ошибка" << std::endl;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    int length;
    std::string str;
    std::cout << "Введите запретную длину: ";
    std::cin >> length;
    std::cout << "Введите слово: ";
    std::cin >> str;
    word(str, length); 
}
