#include "legume.hpp"

Legume::Legume():pret(0),cantitate(0){}

Legume::Legume(int a, int b):pret(a),cantitate(b){}

Legume::Legume(const Legume& l):pret(l.pret),cantitate(l.cantitate){}

Legume::~Legume(){}

void Legume::afisare()
{
	cout << " -----------------------------------------\n";
	cout << "Legume" << endl;
	cout << "Pret: " << this->pret << endl;
	cout << "Cantitate: " << this->cantitate << endl;
}

Legume& Legume::operator =(const Legume& l)
{
	this->pret = l.pret;
	this->cantitate = l.cantitate;
	
	return *this;
}

int Legume::getPret()
{
	return pret;
}

int Legume::getCantitate()
{
	return cantitate;
}

void Legume::setPret(int x)
{
	pret = x;
}

void Legume::setCantitate(int x)
{
	cantitate = x;
}

int Legume::getDiametru()
{
	return 0;
}

void Legume::setDiametru(int x)
{
	return;
}

int Legume::getGreutate()
{
	return 0;
}

void Legume::setGreutate(int x)
{
	return;
}

int Legume::getId()
{
	return 3;
}


