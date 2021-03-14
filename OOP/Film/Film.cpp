#include "Film.h"

void Film::copy(const Film& newFilm)
{
    this->nameFilm = new char[strlen(newFilm.nameFilm) + 1];
    strcpy_s(this->nameFilm, strlen(newFilm.nameFilm) + 1, newFilm.nameFilm);

    this->nameFilm = new char[strlen(newFilm.nameDirector) + 1];
    strcpy_s(this->nameDirector, strlen(newFilm.nameDirector) + 1, newFilm.nameDirector);

    this->awards = newFilm.awards;
}

void Film::erase()
{
    delete[] this->nameFilm;
    delete[] this->nameDirector;
}

Film::Film()
{
    setNameFilm("Default name");
    setNameDirector("Default name");
    setAwards(0);
}

Film& Film::operator=(const Film& newFilm)
{
    if (this != &newFilm)
    {
        this->erase();
        this->copy(newFilm);
    }
    return *this;
}

Film::Film(const Film& newFilm)
{
    this->copy(newFilm);
}

Film::~Film()
{
    this->erase();
}

void Film::setNameFilm(const char* newNameFilm)
{
    delete[] this->nameFilm;
    this->nameFilm = new char[strlen(newNameFilm) + 1];
    strcpy_s(this->nameFilm, strlen(newNameFilm) + 1, newNameFilm);
}

void Film::setNameDirector(const char* newNameDirector)
{
    delete[] this->nameDirector;
    this->nameDirector = new char[strlen(newNameDirector) + 1];
    strcpy_s(this->nameDirector, strlen(newNameDirector) + 1, newNameDirector);
}

void Film::setAwards(int newAwards)
{
    this->awards = newAwards;
}

const char* Film::getNameFilm() const
{
    return this->nameFilm;
}

const char* Film::getNameDirector() const
{
    return this->nameDirector;
}

int Film::getAwards() const
{
    return awards;
}

void Film::print() const
{
    std::cout << "Movie name: " << this->nameFilm << std::endl;
    std::cout << "Diector name: " << this->nameDirector << std::endl;
    std::cout << "Awards: " << this->awards << std::endl;
}
