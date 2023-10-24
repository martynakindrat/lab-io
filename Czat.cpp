#include <iostream>
#include<windows.h>
using namespace std;


void dostepnosc_dietetyka() {};

int main() {
	
	string wybor;
	cout << "Witaj w opcji Czat ze Specjalista!\nWybierz specjaliste, z ktorym chcesz skonsultowac swoj problem:\nwpisz DIETA- jesli potrzebujesz pomocy dietetyka,\nlub TRENING- jesli potrzebujesz pomocy trenera\n\n";
	cin >> wybor;
	if (wybor == "DIETA") {
		cout << "\nWybrales opcje dieta\nSprawdzam dostepnosc dietetyka";
		for (int i = 0; i < 3; i++) {
			Sleep(1000);
			cout << " .";
		}
		//cout << "\nSpecjalista, ktorego wybrales jest tymczasowo niedostepny, sprawdz dostepnosc pozniej, tymczasem zapraszam do poczekalni *link do never gonna give u up*";
		cout << "\nGratulacje! Specjalista, ktorego wybrales jest dostepny. Aby przejœæ do czatu wpisz: HI";
	}
	else if (wybor == "TRENING") {

		cout << "\nWybrales opcje trening\nSprawdzam dostepnosc trenera";
		for (int i = 0; i < 3; i++) {
			Sleep(1000);
			cout << " .";
		}
	   //cout << "\nSpecjalista, ktorego wybrales jest tymczasowo niedostepny, sprawdz dostepnosc pozniej, tymczasem zapraszam do poczekalni *link do never gonna give u up*";
		cout << "\nSpecjalista, ktorego wybrales nie jest dostepny :(";


	}
	else { cout << "\nNiepoprawnie wybrales opcje :("; }




	return 0;

}