#include <iostream>
#include <vector>
using namespace std;


class Info {
private:
    string kategoria; // Category
    int kalorie; // Calories
public:
    // Getters
    string getKategoria() const {
        return kategoria;
    }

    int getKalorie() const {
        return kalorie;
    }

    // Setters
    void setKategoria(const string& _kategoria) {
        kategoria = _kategoria;
    }

    void setKalorie(int _kalorie) {
        kalorie = _kalorie;
    }
};

class User {
private:
    string imie; // Name
    int wiek; // Age
public:
    // Getters
    string getImie() const {
        return imie;
    }

    int getWiek() const {
        return wiek;
    }

    // Setters
    void setImie(const string& _imie) {
        imie = _imie;
    }

    void setWiek(int _wiek) {
        wiek = _wiek;
    }

};

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
        cout << "Sk�adniki: " << skladniki << endl;
        cout << "Instrukcja: " << instrukcja << endl;
        cout << endl;
    }

    void wyswietlDietaMiesna(const vector<Przepis>& przepisy, const vector<string>& posilki) const {
        cout << "Jad�ospis mi�sny:" << endl;
        for (int i = 0; i < posilki.size(); ++i) {
            cout << posilki[i] << endl;
            przepisy[i].wyswietlPrzepis();
        }
    }

    void wyswietlDietaWeganska(const vector<Przepis>& przepisy, const vector<string>& posilki) const {
        cout << "Jad�ospis wega�ski:" << endl;
        for (int i = 0; i < posilki.size(); ++i) {
            cout << posilki[i] << endl;
            przepisy[i].wyswietlPrzepis();
        }
    }

    void wyswietlDietaWegetarianska(const vector<Przepis>& przepisy, const vector<string>& posilki) const {
        cout << "Jad�ospis wegetaria�ski:" << endl;
        for (int i = 0; i < posilki.size(); ++i) {
            cout << posilki[i] << endl;
            przepisy[i].wyswietlPrzepis();
        }
    }
};

int main() {

    vector<Przepis> przepisyMiesne = {
            {"Jajecznica z boczkiem", "Jajka, boczek, cebula, przyprawy", "1. Sma� boczek i cebul�. 2. Dodaj roztrzepane jajka i sma� do �ci�cia."},
            {"Kotlet schabowy", "Schab, jajko, bu�ka tarta, przyprawy", "1. Obtocz schab w jajku i bu�ce tartej. 2. Usma� na patelni z olejem."},
            {"Kurczak z warzywami", "Pier� z kurczaka, warzywa, przyprawy", "1. Usma� kurczaka i warzywa na patelni. 2. Przypraw do smaku."}
    };

    vector<Przepis> przepisyWeganskie = {
            {"Sa�atka z awokado", "Awokado, pomidory, cebula, oliwa", "1. Pokr�j sk�adniki i wymieszaj. 2. Polej oliw�."},
            {"Tofu w sosie teriyaki", "Tofu, sos teriyaki, ry�", "1. Usma� tofu na patelni. 2. Dodaj sos teriyaki. 3. Podawaj z ry�em."},
            {"Kasza gryczana z warzywami", "Kasza gryczana, warzywa, przyprawy", "1. Ugotuj kasz� i warzywa. 2. Przypraw do smaku."}
    };

    vector<Przepis> przepisyWegetarianskie = {
            {"Omlet z warzywami", "Jajka, warzywa, ser, przyprawy", "1. Roztrzep jajka, dodaj warzywa i ser. 2. Sma� omlet na patelni."},
            {"Spaghetti z pomidorami", "Makaron spaghetti, pomidory, bazylia, czosnek", "1. Ugotuj makaron. 2. Podsma� pomidory z czosnkiem i bazyli�. 3. Podawaj z makaronem."},
            {"Sa�atka grecka", "Og�rek, pomidor, cebula, oliwki, ser feta", "1. Pokr�j sk�adniki i wymieszaj. 2. Polej oliw� i dodaj ser fet�."}
    };
	
	return 0;
}