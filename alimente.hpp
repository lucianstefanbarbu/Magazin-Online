#ifndef ALIMENTE_HPP
#define ALIMENTE_HPP

#include <iostream>
using namespace std;

class Alimente
{
public:
	virtual void afisare() = 0;
	virtual ~Alimente() = 0;
	virtual int getPret() = 0;
	virtual void setPret(int) = 0;
	virtual int getCantitate() = 0;
	virtual void setCantitate(int) = 0;
	virtual int getDiametru() = 0;
	virtual void setDiametru(int) = 0;
	virtual int getGreutate() = 0;
	virtual void setGreutate(int) = 0;
	virtual int getId() = 0;
};

#endif
