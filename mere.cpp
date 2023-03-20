#include "mere.hpp"

Mere::Mere():Fructe(),diametru(0){}

Mere::Mere(int a, int b, int c):Fructe(a, b),diametru(c){}

Mere::Mere(const Mere& m):Fructe(m),diametru(m.diametru){}

Mere::~Mere(){}

void Mere::afisare()
{
	cout << " -----------------------------------------\n";
	cout << "Mere" << endl;
	this->Fructe::afisare();
	cout << "Diametru: " << diametru << endl;
}

Mere& Mere::operator =(const Mere& m)
{
	this->pret = m.pret;
	this->cantitate = m.cantitate;
	this->diametru = m.diametru;
	
	return *this;
}

int Mere::getDiametru()
{
	return diametru;
}

void Mere::setDiametru(int a)
{
	diametru = a;
}

int Mere::getGreutate()
{
	return 0;
}

void Mere::setGreutate(int x)
{
	return;
}

int Mere::getId()
{
	return 1;
}
