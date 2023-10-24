#include <iostream>
#include <cmath>
using namespace std;

float obliczanieBMI(int waga, int wzrost){
    float wynikBMI;
    float wzrostwmetrach = wzrost / 100.0; // Zamiana wzrostu na metry
    wynikBMI = waga / (wzrostwmetrach * wzrostwmetrach);
    return wynikBMI;
}

int main() {
    float wybor, waga, wzrost;

    cout << "DOBÓR DIETY" << endl;
    cout << "Wybierz swoją dietę: " << endl << "-mięsna(1)\n-wegańska(2)\n-wegetariańska(3)" << endl;
    cin >> wybor;

    if (wybor == 1) {
        cout << "Wyświetl diety mięsne" << endl;
    } else if (wybor == 2) {
        cout << "Wyświetl diety wegańskie" << endl;
    } else {
        cout << "Wyświetl diety wegetariańskie" << endl;
    }

    cout << "OBLICZANIE BMI" << endl;
    cout << "Podaj aktualną wagę: " << endl;
    cin >> waga;
    cout << "Podaj swój wzrost (w centymetrach): " << endl;
    cin >> wzrost;
    float BMI = obliczanieBMI(waga, wzrost);
    cout << "Twoje BMI wynosi: " << BMI << endl;

    return 0;
}
