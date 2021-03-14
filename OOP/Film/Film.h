#pragma once
#include <iostream>
#include<cstring>

class Film
{
private:
	char* nameFilm;
	char* nameDirector;
	int awards;

	void copy(const Film& newFilm);
	void erase();

public:
	Film();
	Film& operator=(const Film& newFilm);
	Film(const Film& newFilm);
	~Film();

	void setNameFilm(const char* newNameFilm);
	void setNameDirector(const char* newNameDirector);	
	void setAwards(int newAwards);

	const char* getNameFilm() const;
	const char* getNameDirector() const;
	int getAwards() const;

	void print() const;
};

