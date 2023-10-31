#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Przepis {
    string nazwa;
    string skladniki;
    string instrukcja;
};

float obliczanieBMI(int waga, int wzrost) {
    float wynikBMI;
    float wzrostwmetrach = static_cast<float>(wzrost) / 100.0; // Zamiana wzrostu na metry
    wynikBMI = static_cast<float>(waga) / (wzrostwmetrach * wzrostwmetrach);
    return wynikBMI;
}

float obliczZapotrzebowanieKaloryczne(float BMI, int wiek, int wzrost, int waga, char plec, float aktywnosc) {
    float BMR;
    if (plec == 'M') {
        BMR = 88.362 + (13.397 * waga) + (4.799 * wzrost) - (5.677 * wiek);
    } else if (plec == 'K') {
        BMR = 447.593 + (9.247 * waga) + (3.098 * wzrost) - (4.330 * wiek);
    } else {
        cout << "Nieprawidłowa płeć." << endl;
        return 0.0;
    }

    return BMR * aktywnosc;
}

void wyswietlPrzepis(const Przepis &przepis) {
    cout << "Nazwa: " << przepis.nazwa << endl;
    cout << "Składniki: " << przepis.skladniki << endl;
    cout << "Instrukcja: " << przepis.instrukcja << endl;
    cout << endl;
}

void wyswietlDietaMiesna(const vector<Przepis> &przepisy, const vector<string> &posilki) {
    cout << "Jadłospis mięsny:" << endl;
    for (int i = 0; i < posilki.size(); ++i) {
        cout << posilki[i] << endl;
        wyswietlPrzepis(przepisy[i]);
    }
}

void wyswietlDietaWeganska(const vector<Przepis> &przepisy, const vector<string> &posilki) {
    cout << "Jadłospis wegański:" << endl;
    for (int i = 0; i < posilki.size(); ++i) {
        cout << posilki[i] << endl;
        wyswietlPrzepis(przepisy[i]);
    }
}

void wyswietlDietaWegetarianska(const vector<Przepis> &przepisy, const vector<string> &posilki) {
    cout << "Jadłospis wegetariański:" << endl;
    for (int i = 0; i < posilki.size(); ++i) {
        cout << posilki[i] << endl;
        wyswietlPrzepis(przepisy[i]);
    }
}

int main() {
    vector<Przepis> przepisyMiesne = {
            {"Jajecznica z boczkiem", "Jajka, boczek, cebula, przyprawy", "1. Smaż boczek i cebulę. 2. Dodaj roztrzepane jajka i smaż do ścięcia."},
            {"Kotlet schabowy", "Schab, jajko, bułka tarta, przyprawy", "1. Obtocz schab w jajku i bułce tartej. 2. Usmaż na patelni z olejem."},
            {"Kurczak z warzywami", "Pierś z kurczaka, warzywa, przyprawy", "1. Usmaż kurczaka i warzywa na patelni. 2. Przypraw do smaku."}
    };

    vector<Przepis> przepisyWeganskie = {
            {"Sałatka z awokado", "Awokado, pomidory, cebula, oliwa", "1. Pokrój składniki i wymieszaj. 2. Polej oliwą."},
            {"Tofu w sosie teriyaki", "Tofu, sos teriyaki, ryż", "1. Usmaż tofu na patelni. 2. Dodaj sos teriyaki. 3. Podawaj z ryżem."},
            {"Kasza gryczana z warzywami", "Kasza gryczana, warzywa, przyprawy", "1. Ugotuj kaszę i warzywa. 2. Przypraw do smaku."}
    };

    vector<Przepis> przepisyWegetarianskie = {
            {"Omlet z warzywami", "Jajka, warzywa, ser, przyprawy", "1. Roztrzep jajka, dodaj warzywa i ser. 2. Smaż omlet na patelni."},
            {"Spaghetti z pomidorami", "Makaron spaghetti, pomidory, bazylia, czosnek", "1. Ugotuj makaron. 2. Podsmaż pomidory z czosnkiem i bazylią. 3. Podawaj z makaronem."},
            {"Sałatka grecka", "Ogórek, pomidor, cebula, oliwki, ser feta", "1. Pokrój składniki i wymieszaj. 2. Polej oliwą i dodaj ser fetę."}
    };

    float waga, wzrost, aktywnosc, BMI;
    int wiek;
    char plec;

    cout << "OBLICZANIE BMI I ZAPOTRZEBOWANIA KALORYCZNEGO" << endl;

    // Pobieranie danych od użytkownika
    cout << "Podaj aktualną wagę (w kg): ";
    cin >> waga;
    cout << "Podaj swój wzrost (w cm): ";
    cin >> wzrost;
    cout << "Podaj swój wiek: ";
    cin >> wiek;
    cout << "Podaj płeć (M/K): ";
    cin >> plec;
    cout << "Podaj współczynnik aktywności (1.2 dla małej aktywności, 1.55 dla umiarkowanej, 1.9 dla dużej): ";
    cin >> aktywnosc;

    // Obliczanie BMI
    BMI = obliczanieBMI(waga, wzrost);

    // Obliczanie zapotrzebowania kalorycznego
    float zapotrzebowanieKaloryczne = obliczZapotrzebowanieKaloryczne(BMI, wiek, wzrost, waga, plec, aktywnosc);

    cout << "Twoje BMI wynosi: " << BMI << endl;
    cout << "Twoje zapotrzebowanie kaloryczne wynosi: " << zapotrzebowanieKaloryczne << " kcal dziennie." << endl;

    vector<string> posilki = {"Śniadanie", "Obiad", "Kolacja"};

    int wybor;

    cout << "DOBÓR DIETY" << endl;
    cout << "Wybierz swoją dietę: " << endl << "-mięsna(1)\n-wegańska(2)\n-wegetariańska(3)" << endl;
    cin >> wybor;

    switch (wybor) {
        case 1:
            wyswietlDietaMiesna(przepisyMiesne, posilki);
            break;
        case 2:
            wyswietlDietaWeganska(przepisyWeganskie, posilki);
            break;
        case 3:
            wyswietlDietaWegetarianska(przepisyWegetarianskie, posilki);
            break;
        default:
            cout << "Nieprawidłowy wybór diety." << endl;
    }

    return 0;
}
