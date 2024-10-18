#include <iostream>

int main()
{
    std::string name;  
    int age;  



    std::cout << "Enter your AGE"  ;
    std::cin >> age;
    std::cout << "you age is " << age  << std::endl;



    std::cout << "Enter your name" << std::endl ;
    std::getline(std::cin >> std::ws,name);
    std::cout << name  ;
    return 0;
}