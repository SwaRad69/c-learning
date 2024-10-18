#include <iostream>
#include <vector>
#include <cmath>

int main(){
    double a,b,c;

    std::cout << "enter 2 sides of triangle" << std::endl;
    std::cin >> a >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    std::cout << c;


}

