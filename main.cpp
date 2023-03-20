#include "mere.hpp"
#include "pere.hpp"
#include "legume.hpp"
#include "client.hpp"
#include <vector>
#include <iterator>
#include <fstream>

int main()
{
	Alimente **v;
	v = new Alimente*[8];
	
	v[0] = new Mere(1, 2, 3);
	v[1] = new Legume(7, 9);
	v[2] = new Pere(7, 7, 7);
	v[3] = new Pere(2, 3, 4);
	v[4] = new Legume(6, 1);
	v[5] = new Mere(5, 9, 12);
	v[6] = new Mere(2, 3, 5);
	v[7] = new Pere (8, 4, 3);
	
	vector<Alimente*> vector_alimente, cos;
	vector<Alimente*>::iterator it;
	
	for(int i = 0; i < 8; i++)
		vector_alimente.push_back(v[i]);
		
	/*
	Fructe f1(6, 7), f2(4, 9), f3, f4, f5;
	
	f3 = f1 + f2;
	f4 = f1 * f2;
	f5 = f1 - f2;
	
	f3.afisare();
	f4.afisare();
	f5.afisare();
	
	
	Client c1("Victor Rares", "Strada lalelelor 15", 34), c2("Andrei Marcel", "Aleea Revolutiei 33", 9), c3("Maria Magdalena", "Bulevardul Independentei 1", 119);
	vector<Client> vector_clienti;
	vector<Client>::iterator it;
	
	vector_clienti.push_back(c1);
	vector_clienti.push_back(c2);
	vector_clienti.push_back(c3);
	
	cout << "-------------------------------\n" << "Baza de date clienti:\n" << "------------------------------\n";
	for(it = vector_clienti.begin(); it != vector_clienti.end(); it++)
		cout << *it << endl;


	*/
	
	int utilizator;
	
	while(1)
	{
		
	while(1) // Selectare profil
	{
		cout << "Apasati tasta 1 pentru profil magazin sau tasta 2 pentru profil client: ";
		cin >> utilizator;
		if(utilizator == 1 || utilizator == 2)
			break;
		else 
			cout << "Codul introdus este invalid.Introduceti un cod nou." << endl;
	}
	
	if(utilizator == 1) // Profil Magazin
	{
		while(1)
		{
		int optiune;
		cout << "Lista optiuni:" << endl;
		cout << "-adaugare de produse(cod 1)" << endl;
		cout << "-editare de produse(cod 2)" << endl;
		cout << "-stergere de produse(cod 3)" << endl;
		cout << "-prelucrare comanda + realizare raport(cod 4)" << endl;
		
		cin >> optiune;
		
		switch(optiune)
		{
			case 1: //Adaugare de produs
			{
				int tip_produs;
				cout << "Introduceti tipul produsului de adaugat(1 - Mere, 2 - Pere, 3 - Legume): ";
				cin >> tip_produs;
					
				switch(tip_produs)
				{
					case 1: // Adaugare de Mere
						{
							int pret,cant,dia;
							
							cout << "Pret: ";
							cin >> pret;
							cout << "Cantitate: ";
							cin >> cant;
							cout << "Diametru: ";
							cin >> dia;
					
							Alimente* mar = new Mere(pret, cant, dia);
							
							vector_alimente.push_back(mar);
							break;
						}
						
					
					case 2: // Adaugarea de Pere
						{
							int pret,cant,greutate;
							
							cout << "Pret: ";
							cin >> pret;
							cout << "Cantitate: ";
							cin >> cant;
							cout << "Greutate: ";
							cin >> greutate;
					
							Alimente* para = new Pere(pret, cant, greutate);
						
							vector_alimente.push_back(para);
							break;
						}
						
						
					case 3: // Adaugare de legume
						{
							int pret, cant;
							
							cout << "Pret: ";
							cin >> pret;
							cout << "Cantitate: ";
							cin >> cant;
							
							Alimente* leg = new Legume();
							leg->setPret(pret);
							leg->setCantitate(cant);
							
							vector_alimente.push_back(leg);
							break;
						}		
				}
				break;
			}
			
			case 2: // Editare de produs
			{
				int tip_produs;
				cout << "Introduceti tipul produsului de modificat(1 - Mere, 2 - Pere, 3 - Legume): ";
				cin >> tip_produs;
				
				switch(tip_produs)
				{
					case 1: // Editare Mere
					{
						int poz,pret,cant,dia;
						cout << "Introduceti pozitia produsului pe care doriti sa il modificati(Pozitiile 0/5/6):";
						cin >> poz;
						cout << "Introduceti noile valori in campuri sau 0 daca nu doriti sa le schimbati." << endl;
						cout << "Pret: ";
						cin >> pret;
						cout << "Cantitate: ";
						cin >> cant;
						cout << "Diametru: ";
						cin >> dia;
						
						if(pret > 0)
							vector_alimente[poz]->setPret(pret);
						if(cant > 0)
							vector_alimente[poz]->setCantitate(cant);
						if(dia > 0)
							vector_alimente[poz]->setDiametru(dia);
						break;
					}
						
					case 2: // Editare Pere
					{
						int poz,pret,cant,greutate;
						cout << "Introduceti pozitia produsului pe care doriti sa il modificati(Pozitiile 2/3/7):";
						cin >> poz;
						cout << "Introduceti noile valori in campuri sau 0 daca nu doriti sa le schimbati." << endl;
						cout << "Pret: ";
						cin >> pret;
						cout << "Cantitate: ";
						cin >> cant;
						cout << "Greutate: ";
						cin >> greutate;
						
						if(pret > 0)
							vector_alimente[poz]->setPret(pret);
						if(cant > 0)
							vector_alimente[poz]->setCantitate(cant);
						if(greutate > 0)
							vector_alimente[poz]->setGreutate(greutate);
						break;
					}
					
					case 3: // Editare Legume
					{
						int poz,pret,cant;
						cout << "Introduceti pozitia produsului pe care doriti sa il modificati(Pozitiile 1/4):";
						cin >> poz;
						cout << "Introduceti noile valori in campuri sau 0 daca nu doriti sa le schimbati." << endl;
						cout << "Pret: ";
						cin >> pret;
						cout << "Cantitate: ";
						cin >> cant;
						
						if(pret > 0)
							vector_alimente[poz]->setPret(pret);
						if(cant > 0)
							vector_alimente[poz]->setCantitate(cant);
						break;
					}
				}
				break;
			}
			
			case 3: // Stergere Produs
			{
				int tip_produs;
				cout << "Introduceti tipul produsului de sters(1 - Mere, 2 - Pere, 3 - Legume): ";
				cin >> tip_produs;
				
				switch(tip_produs)
				{
					case 1: // Stergere Mere
						{
							cout << "Introduceti pozitia produsului pe care doriti sa il stergeti(Pozitiile 0/5/6):";
							int poz;
							cin >> poz;
							if(vector_alimente[poz] != NULL)
								vector_alimente.erase(vector_alimente.begin() + poz);
							break;
						}
					
					case 2: // Stergere Pere
						{
							cout << "Introduceti pozitia produsului pe care doriti sa il stergeti(Pozitiile 2/3/7):";
							int poz;
							cin >> poz;
							if(vector_alimente[poz] != NULL)
								vector_alimente.erase(vector_alimente.begin() + poz);
							break;
						}
						
					case 3: // Stergere Legume
						{
							cout << "Introduceti pozitia produsului pe care doriti sa il stergeti(Pozitiile 1/4):";
							int poz;
							cin >> poz;
							if(vector_alimente[poz] != NULL)
								vector_alimente.erase(vector_alimente.begin() + poz);
							break;
						}
				}
				break;
			}
			
			case 4: // Prelucrare comanda si realizare raport
			{
				ofstream raport;
				raport.open("raport_magazin.txt");
				int total = 0;
				for(it = cos.begin(); it != cos.end(); it++)
				{
					total = total + (*it)->getPret();
					switch((*it)->getId())
					{
						case 1: // Mere
						{
							raport << "----------------------\n";
							raport << "Mere" << endl;
							raport << "Pret: " << (*it)->getPret() << endl;
							raport << "Cantitate: " << (*it)->getCantitate() << endl;
							raport << "Diametru: " << (*it)->getDiametru() << endl;
							break;
						}
						
						case 2: // Pere
						{
							raport << "----------------------\n";
							raport << "Pere" << endl;
							raport << "Pret: " << (*it)->getPret() << endl;
							raport << "Cantitate: " << (*it)->getCantitate() << endl;
							raport << "Greutate: " << (*it)->getGreutate() << endl;
							break;
						}
						
						case 3: // Legume
						{
							raport << "----------------------\n";
							raport << "Legume" << endl;
							raport << "Pret: " << (*it)->getPret() << endl;
							raport << "Cantitate: " << (*it)->getCantitate() << endl;
							break;
						}
					}
				}
				raport << "----------------------\n" << "Total comanda: " << total << endl;
				raport.close();
				cos.clear();
			}	
		}
		bool decizie;
		cout << "Apasati tasta 0 daca doriti sa iesiti din meniu sau tasta 1 daca doriti sa va intoarceti la lista de optiuni magazin:";
		cin >> decizie;
		if(decizie == 0)
			break;
	}
  }
  else // Profil Client
  {
  	Client c;
  	cin >> c;
  	while(1)
		{
			int optiune;
			cout << "Lista optiuni:" << endl;
			cout << "-vizualizare produse(cod 1)" << endl;
			cout << "-adaugare produs in cos(cod 2)" << endl;
			cout << "-stergere produs din cos(cod 3)" << endl;
			cout << "-vizualizare cos(cod 4)" << endl;
			cout << "-trimitere comanda + realizare raport(cod 5)" << endl;
		
			cin >> optiune;
			
			switch(optiune)
			{
				case 1: // Vizualizare produse
					{
						for(it = vector_alimente.begin(); it != vector_alimente.end(); it++)
							(**it).afisare();
						break;
					}
				
				case 2: // Adaugare produs in cos
					{
						cout << "Introduceti pozitia produsului de adaugat: ";
						int poz;
						while(1)
						{
							cin >> poz;
							if(poz >= vector_alimente.capacity())
								cout << "Valoarea nu este valida incercati un numar mai mic." << endl;
							else 
								break;
						}
						Alimente *aux = vector_alimente[poz];
						cos.push_back(aux);
						break;
					}
				
				case 3: // Stergere produs din cos
					{
						cout << "Introduceti pozitia produsului de sters: ";
						int poz;
						while(1)
						{
							cin >> poz;
							if(poz >= cos.capacity())
								cout << "Valoarea nu este valida incercati un numar mai mic." << endl;
							else 
								break;
						}
						cos.erase(cos.begin() + poz);
						break;	
					}
				
				case 4: // Vizualizare produse din cos
					{
						for(it = cos.begin(); it != cos.end(); it++)
							(**it).afisare();
						break;
					}
	
				case 5: // trimitere comanda + realizare raport
					{
						ofstream raport;
						raport.open("raport_client.txt");
						
						raport << "Client" << endl;
						raport << "Nume: " << c.getNume() << endl;
						raport << "Adresa: " << c.getAdresa() << endl;
						raport << "ID: " << c.getId() << endl;
						
						int total = 0;
						for(it = cos.begin(); it != cos.end(); it++)
						{
							total = total + (*it)->getPret();
							switch((*it)->getId())
							{
								case 1: // Mere
									{
										raport << "----------------------\n";
										raport << "Mere" << endl;
										raport << "Pret: " << (*it)->getPret() << endl;
										raport << "Cantitate: " << (*it)->getCantitate() << endl;
										raport << "Diametru: " << (*it)->getDiametru() << endl;
										break;
									}
						
								case 2: // Pere
									{
										raport << "----------------------\n";
										raport << "Pere" << endl;
										raport << "Pret: " << (*it)->getPret() << endl;
										raport << "Cantitate: " << (*it)->getCantitate() << endl;
										raport << "Greutate: " << (*it)->getGreutate() << endl;
										break;
									}
						
								case 3: // Legume
									{
										raport << "----------------------\n";
										raport << "Legume" << endl;
										raport << "Pret: " << (*it)->getPret() << endl;
										raport << "Cantitate: " << (*it)->getCantitate() << endl;
										break;
									}
							}
						}
						raport << "----------------------\n" << "Total comanda: " << total << endl;
						raport.close();
						cos.clear();
						break;
		 			}
			}
			bool decizie;
			cout << "Apasati tasta 0 daca doriti sa iesiti din meniu sau tasta 1 daca doriti sa va intoarceti la lista de optiuni client:";
			cin >> decizie;
			if(decizie == 0)
				break;	
		}
  }
  	bool decizie;
	cout << "Apasati tasta 0 daca doriti sa iesiti din program sau tasta 1 daca doriti sa va intoarceti la alegerea utilizatorului:";
	cin >> decizie;
	if(decizie == 0)
		break;
}
	
	for(int i = 0; i < 8; i++)
		delete v[i];
		
	delete [] v;
	
	cos.clear();
	vector_alimente.clear();
	
	return 0;
}
