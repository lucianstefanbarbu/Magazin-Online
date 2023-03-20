#ifndef FRUCTE_HPP
#define FRUCTE_HPP

#include "alimente.hpp"

class Fructe: public Alimente
{
protected:
	int pret;
	int cantitate;
public:
	Fructe();
	Fructe(int, int);
	Fructe(const Fructe&);
	~Fructe();
	
	void afisare();
	int getPret();
	int getCantitate();
	void setPret(int);
	void setCantitate(int);
	int getDiametru();
	void setDiametru(int);
	int getGreutate();
	void setGreutate(int);
	int getId();
	
	
	Fructe& operator =(const Fructe&);
	friend Fructe operator +(Fructe&, Fructe&);
	friend Fructe operator -(Fructe&, Fructe&);
	friend Fructe operator *(Fructe&, Fructe&);
};

#endif
	
