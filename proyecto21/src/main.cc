#include<iostream>
#include "project.hh"

int main()
{
    int number{5};

    std::cout << SayHello ("Dios")<< std::endl;
    dosomething();
    std::cout << Add(1, 1) << std::endl;
    PrintAdd(2, 3);
    std::cout << number << std::endl;
    AddOneByRef(number);
    std::cout << number << std::endl;
    std::cin.get();
    return 0;
}