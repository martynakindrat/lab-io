#include <iostream>
#include <string>

using namespace std;

class User {}; //z klasy User 
User bozena;

class Trening {
	
	string typTreningu;
	string otoczenie;
	float czasTreningu;
	string intensywnosc;


	void wybierzTrening(float czasTreningu,string intensywnosc,string otoczenie, string typTreningu) {};
	
	User displayUserinfo() {
		//funkcja z klasy user
		cout << "Bozena oto twoje dane Bozena:\nimie:Bozena\n\n";

		return bozena;
	};


};


int main() {
	Trening trening1;

	cout << "Wybierz typ treningu (wpisz wybrana opcje z podanych):\nsilowy\nwytrzymalosciowy\nobwodowy\nfunkcjonalny\nwytrzymalosciowy\n\n";
		cin >> typTreningu;






	return 0;
}

