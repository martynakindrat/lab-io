#include <iostream>
#include <vector>

using namespace std;

class Przepis {
private:
    string nazwa;
    string skladniki;
    string instrukcja;

public:
    // Konstruktor
    Przepis(const string& _nazwa, const string& _skladniki, const string& _instrukcja)
            : nazwa(_nazwa), skladniki(_skladniki), instrukcja(_instrukcja) {}

    // Metody
    void wyswietlPrzepis() const {
        cout << "Nazwa: " << nazwa << endl;
        cout << "Składniki: " << skladniki << endl;
        cout << "Instrukcja: " << instrukcja << endl;
        cout << endl;
    }

    void wyswietlDietaMiesna(const vector<Przepis>& przepisy, const vector<string>& posilki) const {
        cout << "Jadłospis mięsny:" << endl;
        for (int i = 0; i < posilki.size(); ++i) {
            cout << posilki[i] << endl;
            przepisy[i].wyswietlPrzepis();
        }
    }

    void wyswietlDietaWeganska(const vector<Przepis>& przepisy, const vector<string>& posilki) const {
        cout << "Jadłospis wegański:" << endl;
        for (int i = 0; i < posilki.size(); ++i) {
            cout << posilki[i] << endl;
            przepisy[i].wyswietlPrzepis();
        }
    }

    void wyswietlDietaWegetarianska(const vector<Przepis>& przepisy, const vector<string>& posilki) const {
        cout << "Jadłospis wegetariański:" << endl;
        for (int i = 0; i < posilki.size(); ++i) {
            cout << posilki[i] << endl;
            przepisy[i].wyswietlPrzepis();
        }
    }
};

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


    return 0;
}
