#ifndef MERE_HPP
#define MERE_HPP

#include "fructe.hpp"

class Mere: public Fructe
{
protected:
	int diametru;
public:
	Mere();
	Mere(int, int, int);
	Mere(const Mere&);
	~Mere();
	
	void afisare();
	Mere& operator =(const Mere&);
	int getDiametru();
	void setDiametru(int);
	int getGreutate();
	void setGreutate(int);
	int getId();
};

#endif
