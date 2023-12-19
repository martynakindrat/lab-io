#include <iostream>
#include <cmath>
#include <cassert>

class Kalkulator {
public:
    static double dodaj(double a, double b) {
        return a + b;
    }

    static double odejmij(double a, double b) {
        return a - b;
    }

    static double pomnoz(double a, double b) {
        return a * b;
    }

    static double podziel(double a, double b) {
        if (b == 0) {
            throw std::invalid_argument("Dzielenie przez zero jest niezdefiniowane");
        }
        return a / b;
    }

    static double potega(double podstawa, double wykladnik) {
        return std::pow(podstawa, wykladnik);
    }
};

bool czyRowne(double a, double b, double epsilon = 1e-6) {
    return std::abs(a - b) < epsilon;
}

void uruchomTesty() {
    // Test dodawania
    assert(czyRowne(Kalkulator::dodaj(2.0, 3.0), 5.0));

    // Test odejmowania
    assert(czyRowne(Kalkulator::odejmij(5.0, 3.0), 2.0));

    // Test mno¿enia
    assert(czyRowne(Kalkulator::pomnoz(2.0, 3.0), 6.0));

    // Test dzielenia
    assert(czyRowne(Kalkulator::podziel(6.0, 2.0), 3.0));

    // Test potêgowania
    assert(czyRowne(Kalkulator::potega(2.0, 3.0), 8.0));
}

int main() {
    // Uruchomienie testów jednostkowych
    uruchomTesty();

    // Przyk³ady u¿ycia kalkulatora
    std::cout << "2 + 3 = " << Kalkulator::dodaj(2.0, 3.0) << std::endl;
    std::cout << "5 - 3 = " << Kalkulator::odejmij(5.0, 3.0) << std::endl;
    std::cout << "2 * 3 = " << Kalkulator::pomnoz(2.0, 3.0) << std::endl;
    std::cout << "6 / 2 = " << Kalkulator::podziel(6.0, 2.0) << std::endl;
    std::cout << "2 ^ 3 = " << Kalkulator::potega(2.0, 3.0) << std::endl;

    return 0;
}
