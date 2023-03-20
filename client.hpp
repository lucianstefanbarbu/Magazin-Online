#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Client
{
private:
	char* nume;
	char* adresa;
	int id;
public:
	Client();
	Client(const char*, const char*, int);
	Client(const Client&);
	~Client();
	
	void afisare();
	char* getNume();
	char* getAdresa();
	int getId();
	void setNume(char*);
	void setAdresa(char*);
	void setId(int);
	
	friend istream& operator >>(istream&, Client&);
};

#endif
