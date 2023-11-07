#include <iostream>
using namespace std;

class Specjalista {
public:
    void dietetyk() {
        string dietetyk;
        cout << "Wybierz dietetyka: " << endl;
        cin >> dietetyk;
        cout << "Wybrano " << dietetyk << " jako dietetyka." << endl;
    }

    void trener() {
        string trener;
        cout << "Wybierz trenera: " << endl;
        cin >> trener;
        cout << "Wybrano " << trener << " jako trenera." << endl;
    }

    /* User calculateBMI(){
     (pobiera parametry z USER) */
};

int main() {
    Specjalista specjalista;
    specjalista.dietetyk();

    return 0;
}
