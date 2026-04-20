#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::string d = "";
    std::cout << "Число, число, потом действие (+,-,*,/)" << std::endl;
    std::cin >> a >> b >> d;
if(d == "+")std::cout << a+b;
else if(d == "-")std::cout << a-b;
else if(d == "*")std::cout << a*b;
else if(d == "/"){if(b != 0){std::cout << a/b;} else std::cout << "на ноль делить нельзя, друг";}
    
}