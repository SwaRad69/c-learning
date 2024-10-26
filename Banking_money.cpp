#include <iostream>
double deposit(double money)
{
   double how_much_more=0;
   std::cout << "Enter the amount you want to deposit \n";
    std::cin >> how_much_more;

   return money + how_much_more;


}
double withdraw(double money)
{
   double how_much_less;
   std::cout << "Enter the amount you want to withdraw \n";
    std::cin >> how_much_less;

   return money - how_much_less;


}
int main(){
    double money=0;
    int choice=99;
    std::cout << "Welcome to the ATM system" << std::endl;
    while (choice!=0)
    {
         std::cout << "Enter 1 to withdraw \n 2 to deposit money \n 0 to exit \n";
    std::cin >> choice;
    if (choice==2)
    {
        money=deposit(money);

    }
    else
    {
        money=withdraw(money);
    }
    std::cout<< "THe BAlnce is\n" << money;
    
    }
    std::cout<< "\nbye bye";

    
  
    

}