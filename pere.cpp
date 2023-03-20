#include "pere.hpp"

Pere::Pere():Fructe(),greutate(0){}

Pere::Pere(int a, int b, int c):Fructe(a, b),greutate(c){}

Pere::Pere(const Pere& p):Fructe(p),greutate(p.greutate){}

Pere::~Pere(){}

void Pere::afisare()
{
	cout << " -----------------------------------------\n";
	cout << "Pere" << endl;
	this->Fructe::afisare();
	cout << "Greutate: " << greutate << endl;
}

Pere& Pere::operator =(const Pere& p)
{
	this->pret = p.pret;
	this->cantitate = p.cantitate;
	this->greutate = p.greutate;
	
	return *this;
}

int Pere::getGreutate()
{
	return greutate;
}

void Pere::setGreutate(int a)
{
	greutate = a;
}

int Pere::getDiametru()
{
	return 0;
}

void Pere::setDiametru(int x)
{
	return;
}

int Pere::getId()
{
	return 2;
}
