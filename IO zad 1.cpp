#include <iostream>

using namespace std;

int licznik_pominiêtych=0;
	int licznik_ujemnych=0;


int main(){
	int a = 0;
	int tab[9];
	
	int y = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Podaj liczbe: ";
		cin >> tab[i];
		cout << endl;
	}

	for (int i = 0; i < 10; i++) {
		if (tab[i] < 0)
		{
			licznik_ujemnych++;
		}
		else { licznik_pominiêtych++; }

	}

int* tablica = new int[licznik_ujemnych-1];

	for (int i = 0; i < 10; i++) {
		if (tab[i] < 0)
		{
			tablica[y++] = tab[i];
		}

	}

	cout << "Liczby ujemne: ";
	for (int i = 0; i < licznik_ujemnych; i++) {
		cout << tablica[i] << endl;
	}
	cout << "Pominieto nastepujaca ilosc liczb: " << licznik_pominiêtych << "\n" << "Liczb ujemnych bylo: " << licznik_ujemnych << "\n";



	delete[] tablica;
	return 0;
}