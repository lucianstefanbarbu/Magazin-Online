#include "client.hpp"

Client::Client():id(0)
{
	this->nume = NULL;
	this->adresa = NULL;
}

Client::Client(const char* n, const char* a, int i):id(i)
{
	nume = new char[strlen(n) + 1];
	strcpy(nume, n);
	
	adresa = new char[strlen(a) + 1];
	strcpy(adresa, a);
}

Client::Client(const Client& c):id(c.id)
{
	nume = new char[strlen(c.nume) + 1];
	strcpy(nume, c.nume);
	
	adresa = new char[strlen(c.adresa) + 1];
	strcpy(adresa, c.adresa);
}

Client::~Client()
{
	if(nume != NULL)
		delete [] nume;
	if(adresa != NULL)
		delete [] adresa;
}

void Client::afisare()
{
	cout << " -----------------------------------------\n";
	cout << "Nume: " << nume << endl;
	cout << "Adresa: " << adresa << endl;
	cout << "ID: " << id << endl;
}

char* Client::getNume()
{
	return nume;
}

char* Client::getAdresa()
{
	return adresa;
}

int Client::getId()
{
	return id;
}

void Client::setNume(char* n)
{
	if(nume != NULL)
		delete[] nume;
	nume = new char[strlen(n) + 1];
	strcpy(nume, n);
}

void Client::setAdresa(char* a)
{
	if(adresa != NULL)
		delete[] adresa;
	adresa = new char[strlen(a) + 1];
	strcpy(adresa, a);
}

void Client::setId(int i)
{
	id = i;
}

istream& operator >>(istream& in, Client& c)
{
	cout << "Client nou" << endl;
	
	cout << "Nume: ";
	char buf[50];
	fflush(stdin);
	in.getline(buf, 49);
	c.setNume(buf);
	cout << endl;
	
	cout << "Adresa: ";
	fflush(stdin);
	in.getline(buf, 49);
	c.setAdresa(buf);
	cout << endl;

	cout << "ID: ";
	int id_aux;
	in >> id_aux;
	c.setId(id_aux);
	
	return in;
}
