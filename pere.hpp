#ifndef PERE_HPP
#define PERE_HPP

#include "fructe.hpp"

class Pere: public Fructe
{
protected:
	int greutate;
public:
	Pere();
	Pere(int, int, int);
	Pere(const Pere&);
	~Pere();
	
	void afisare();
	Pere& operator =(const Pere&);
	int getGreutate();
	void setGreutate(int);
	int getDiametru();
	void setDiametru(int);
	int getId();
};

#endif
