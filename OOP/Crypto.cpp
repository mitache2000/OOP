#include "Crypto.h"

Crypto::Crypto()
{
    setName("Default name");
    setLastPrice(0);
    setCurrentPrice(0);
}

Crypto::Crypto(const char* newName, double newLastPrice, double newCurrentPrice)
{
    setName(newName);
    setLastPrice(newLastPrice);
    setCurrentPrice(newCurrentPrice);
}

void Crypto::setName(const char* newName)
{
    strcpy_s(this->name, strlen(newName) + 1, newName);
}

const char* Crypto::getName() const
{
    return this->name;
}

void Crypto::setLastPrice(double newLastPrice)
{
    this->lastPrice = newLastPrice;
}

double Crypto::getLastPrice() const
{
    return this->lastPrice;
}

void Crypto::setCurrentPrice(double newCurrentPrice)
{
    this->currentPrice = newCurrentPrice;
}

double Crypto::getCurrentPrice() const
{
    return this->currentPrice;
}

double Crypto::priceDifference()
{
    if (this->currentPrice != 0) { 
        return (this->currentPrice - this->lastPrice) / this->currentPrice * 100;
    }
    return 0;
}

void Crypto::print() const
{
    std::cout << "Name: "<< this->name << std::endl;
    std::cout << "Last Price: "<< this->lastPrice << std::endl;
    std::cout << "Current Price: "<< this->currentPrice << std::endl;
}
