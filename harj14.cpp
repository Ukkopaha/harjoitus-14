/********************************************
* Paulus Linna
* IIA14SB
* Tehtäväkuvaus:
*
*	Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
*	Anna (kaikki) etunimesi (merkkijono):
*	Anna kengannumero (kokonaisluku):
*	Anna sukunimi (merkkijono):
*	Anna koulumatka (reaaliluku):
*	Anna osoitteesi:
*	Anna postinumero:
*
*	Ohjelma tulostaa tiedot seuraavasti:
*	sukunimi etunimet
*	osoite
*	postinumero
*	kengannumero ja koulumatka
*
*	Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
*
* Päivämäärä: 23.10.2014
* Versio 1.0
***********************************************/
#include <iostream>
using namespace std;
void main()
{
	char etunimi[20];
	int kengannro;
	char sukunimi[20];
	float koulumatka;
	char osoite[30];
	int postinro;

	cout << "Anna kaikki etunimesi: ";
	cin.getline(etunimi, 20);
	cout << "Anna kengannumerosi: ";
	cin >> ws >> kengannro;
	cout << "Anna sukunimi: ";
	cin >> ws >> sukunimi;
	cout << "Anna koulumatka: ";
	cin.get();
	cin >> ws >> koulumatka;
	cout << "Anna osoitteesi: ";
	cin.get();
	cin.getline(osoite, 30);
	cout << "Anna postinumerosi: ";
	cin >> ws >> postinro;

	cout << endl << endl << sukunimi << " " << etunimi;
	cout << endl << osoite;
	cout << endl << postinro;
	cout << endl << kengannro << " " << koulumatka;
}