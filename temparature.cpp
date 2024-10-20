#include <iostream>

int main()
{
    double temp;
    char degree;
    std::cout << "Enter temperature";
    std::cin >> temp;
    std::cout << "Enter 'C' for Celsius or 'F' for Fahrenheit: ";
    std::cin >> degree;
    if (degree == 'C'||degree == 'c')
    {
        double celsius = (temp - 32) * 5.0 / 9;
        std::cout << temp << "Fahrenheit is equal to " << celsius << "C";
        }
        else if (degree == 'F'||degree == 'f')
        {
            double fahrenheit = (temp * 9.0 / 5.) + 32;
            std::cout << temp << "Celsius is equal to " << fahrenheit << "F";
        }
    return 0;
}