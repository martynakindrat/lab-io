#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Info {
private:
    string posilki;
    string treningi;
    string poziomNawodnienia;

public:
    void wczytajDane() {
        ifstream plikPosilki("posilki.txt");
        ifstream plikTreningi("treningi.txt");
        ifstream plikNawodnienie("nawodnienie.txt");

        if (plikPosilki.is_open() && plikTreningi.is_open() && plikNawodnienie.is_open()) {
            getline(plikPosilki, posilki);
            getline(plikTreningi, treningi);
            getline(plikNawodnienie, poziomNawodnienia);

            plikPosilki.close();
            plikTreningi.close();
            plikNawodnienie.close();
        }
        else {
            cout << "Blad: Nie udalo sie otworzyc jednego z plikow.\n";
        }
    }

    void showFullInfo() {
        cout << "\nPlan dnia:\n";
        cout << "-------------\n";
        cout << "Posilki:\n" << posilki << "\n";
        cout << "Treningi:\n" << treningi << "\n";
        cout << "Poziom nawodnienia:\n" << poziomNawodnienia << "\n";
        cout << "-------------\n";
    }
};

int main() {
    Info info;
    info.wczytajDane();
    info.showFullInfo();

    return 0;
}
