#ifndef LEGUME_HPP
#define LEGUME_HPP

#include "alimente.hpp"

class Legume: public Alimente
{
protected:
	int pret;
	int cantitate;
public:
	Legume();
	Legume(int, int);
	Legume(const Legume&);
	~Legume();
	
	void afisare();
	Legume& operator =(const Legume&);
	int getPret();
	int getCantitate();
	void setPret(int);
	void setCantitate(int);
	int getDiametru();
	void setDiametru(int);
	int getGreutate();
	void setGreutate(int);
	int getId();
};

#endif
