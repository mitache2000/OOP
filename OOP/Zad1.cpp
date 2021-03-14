#include<iostream>
#include "Crypto.h"


int main()
{
    Crypto crypto1;

    crypto1.setName("Name");
    crypto1.setCurrentPrice(100);
    crypto1.setLastPrice(50);
    crypto1.print();
    std::cout << "The price difference is: " << crypto1.priceDifference() << "%" << std::endl;;

}


