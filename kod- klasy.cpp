#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

class Trening {
public:
    string typTreningu;
    int czasTreningu;
    int intensywnosc;

    Trening() : czasTreningu(0), intensywnosc(0) {}

    void wybierzTrening() {
        cout << "Podaj typ treningu (np. cardio, silowy, stretching, interwalowy): ";
        cin >> typTreningu;

        cout << "Podaj czas treningu (w minutach): ";
        cin >> czasTreningu;

        cout << "Podaj intensywnosc treningu (skala 1-10): ";
        cin >> intensywnosc;
    }
};

void wyswietlCzasTreningu(const vector<string>& listaCwiczen, int czasTreningu) {
    if (listaCwiczen.empty()) {
        cout << "Blad: Lista cwiczen jest pusta.\n";
        return;
    }

    int czasNaCwiczenie = czasTreningu / listaCwiczen.size();
    cout << "Czas przeznaczony na kazde cwiczenie: " << czasNaCwiczenie << " minut.\n";
}


int main() {
    Trening trening;
    trening.wybierzTrening();

    vector<string> cardioCwiczenia = { "Bieganie", "Skakanka", "Plywanie", "Rower" };
    vector<string> silowyCwiczenia = { "Przysiady", "Wyciskanie sztangi", "Martwy ciag", "Podciaganie na dr¹¿ku" };
    vector<string> stretchingCwiczenia = { "Rozciaganie nog", "Sk³ony", "Flezje", "Yoga" };
    vector<string> interwalowyCwiczenia = { "Sprint", "Przerwa", "Skakanie", "Burpees" };

    vector<string> listaCwiczen;
    if (trening.typTreningu == "cardio") {
        listaCwiczen = cardioCwiczenia;
    }
    else if (trening.typTreningu == "silowy") {
        listaCwiczen = silowyCwiczenia;
    }
    else if (trening.typTreningu == "stretching") {
        listaCwiczen = stretchingCwiczenia;
    }
    else if (trening.typTreningu == "interwalowy") {
        listaCwiczen = interwalowyCwiczenia;
    }
    else {
        cout << "Nieznany typ treningu.\n";
        return 1;
    }

    cout << "Oto lista cwiczen dostosowana do Twojego treningu:\n";
    for (const auto& cwiczenie : listaCwiczen) {
        cout << "- " << cwiczenie << "\n";
    }

    cout << "Wybierz cwiczenia, ktore chcesz wykonac (oddzielone spacjami): ";
    vector<string> wybraneCwiczenia;
    string wybor;
    cin.ignore();
    getline(cin, wybor);

    istringstream ss(wybor);
    while (ss >> wybor) {
        auto it = find(listaCwiczen.begin(), listaCwiczen.end(), wybor);
        if (it != listaCwiczen.end()) {
            wybraneCwiczenia.push_back(wybor);
        }
        else {
            cout << "Blad: Nieprawidlowe cwiczenie - " << wybor << "\n";
        }
    }

    wyswietlCzasTreningu(wybraneCwiczenia, trening.czasTreningu);

    return 0;
}
