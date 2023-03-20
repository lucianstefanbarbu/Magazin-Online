#include "fructe.hpp"

Fructe::Fructe():pret(0),cantitate(0){}

Fructe::Fructe(int a, int b):pret(a),cantitate(b){}

Fructe::Fructe(const Fructe& f):pret(f.pret),cantitate(f.cantitate){}

Fructe::~Fructe(){}

void Fructe::afisare()
{
	cout << "Pret: " << this->pret << endl;
	cout << "Cantitate: " << this->cantitate << endl;
}

Fructe& Fructe::operator =(const Fructe& f)
{
	this->pret = f.pret;
	this->cantitate = f.cantitate;
	
	return *this;
}

int Fructe::getPret()
{
	return pret;
}

int Fructe::getCantitate()
{
	return cantitate;
}

void Fructe::setPret(int x)
{
	pret = x;
}

void Fructe::setCantitate(int x)
{
	cantitate = x;
}

Fructe operator +(Fructe& f1, Fructe& f2)
{
	Fructe aux;
	int pret_aux, cant_aux;
	
	pret_aux = f1.getPret() + f2.getPret();
	cant_aux = f1.getCantitate() + f2.getCantitate();
	
	aux.setCantitate(cant_aux);
	aux.setPret(pret_aux);
	
	return aux;
}

Fructe operator *(Fructe& f1, Fructe& f2)
{
	Fructe aux;
	int pret_aux, cant_aux;
	
	pret_aux = f1.getPret() * f2.getPret();
	cant_aux = f1.getCantitate() * f2.getCantitate();
	
	aux.setCantitate(cant_aux);
	aux.setPret(pret_aux);
	
	return aux;
}

Fructe operator -(Fructe& f1, Fructe& f2)
{
	Fructe aux;
	int pret_aux, cant_aux;
	
	pret_aux = f1.getPret() - f2.getPret();
	cant_aux = f1.getCantitate() - f2.getCantitate();
	
	if(pret_aux <= 0)
		pret_aux = 1;
	
	if(cant_aux < 0)
		cant_aux = 0;
	
	aux.setCantitate(cant_aux);
	aux.setPret(pret_aux);
	
	return aux;
}

int Fructe::getDiametru()
{
	return 0;
}

void Fructe::setDiametru(int x)
{
	return;
}

int Fructe::getGreutate()
{
	return 0;
}

void Fructe::setGreutate(int x)
{
	return;
}

int Fructe::getId()
{
	return 0;
}



