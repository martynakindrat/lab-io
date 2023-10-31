#include <iostream>
#include <string>

using namespace std;

class Klient {  //User
public:
    std::string imie;
    int wiek;
    double wzrost;
    double waga;
    double bmi;
    Klient(std::string imie, int wiek, double wzrost, double waga)
        : imie(imie), wiek(wiek), wzrost(wzrost), waga(waga) {
        obliczBMI();//w oryginale funkcja wykonywana na etapie wprowadzania danych
    }
    void obliczBMI() {
        bmi = waga / ((wzrost / 100.0) * (wzrost / 100.0));
    }

};

class Specjalista{
public:

void trener(){

else if (cel == "trener") {
        cout << "\n\nSwietnie, teraz mozemy porozmawiac o twoim planie treningowym.";
        cout << "\nOto najczesciej zadawane pytania o tematyce dieta, mam nadzieje, ze rozwieje twoje watpliwosci:\n\n";

        cout << "Pytanie 1: Czy mogę zastšpić treningi w silowni treningiem w domu? ";

        cout << "\n\nPytanie 2: Jak długo powinienem cwiczyć kazdego dnia? ";

        cout << "\n\nPytanie 3: Jakie cwiczenia sš najlepsze do spalenia tluszczu? ";

        cout << "\n\nPytanie 4: Co powinienem jesc przed treningiem?";

        cout << "\n\nPytanie 5: Potrzebuje inspiracji do treningow (nieujetych w moim planie treningowym)";


        cout << "\n\nWpisz numer pytania na ktore odpowiedz chcesz uslyszec: ";

        cin >> odpowiedz;

        if (odpowiedz == 1) {
            cout << "\n\nOczywiscie, trening w domu moze być efektywny. Mogę dostosowac plan treningowy do Twojego srodowiska i dostepnych sprzetow.";
        }

        else if (odpowiedz == 2) {
            cout << "\n\nCzas treningu zalezy od Twojego poziomu zaawansowania i celu. Ogolnie rzecz biorac, 30-60 minut treningu dziennie jest dobrym wyjsciem.";

        }

        else if (odpowiedz == 3) {
            cout << "\n\nCwiczenia aerobiczne, takie jak jogging, jazda na rowerze czy plywanie, sš swietne do spalania tluszczu. Ale rownie wazne jest uwzglednienie treningu silowego w Twoim planie treningowym.";

        }

        else if (odpowiedz == 4) {
            cout << "\n\nPrzed treningiem zalecam lekkie posilki zawierajšce weglowodany, ktore dostarcza Ci energii. Przykladowo, owsianka lub banana moga byc dobrym wyborem.";
        }


        else if (odpowiedz == 5) {
            cout << "\n\nOto kilka swietnych i prostych do zrealizowania w domu propozycji";
            cout << "\n7 CWICZEN BEZ SPRZETU - https://www.bcaa.pl/poradnik-sportowca/trening-w-domu-7-cwiczen-bez-sprzetu.html";
            cout << "\nPROSTY PLAN CWICZEN W DOMU - https://centrumrespo.pl/trening/zaczac-cwiczyc-domu/#przyk%C5%82adowy";
            cout << "\nNAJLEPSZE APLIKACJE DO CWICZEN W DOMU - https://sklepsportowy.pl/pl/blog/Najpopularniejsze-aplikacje-do-cwiczen-w-domu-ranking-2020/59";
        }
        else {
            cout << "\n\nNie istnieje pytanie o podanym numerze, jezeli moje odpowiedzi nie sa dla Ciebie satysfakcjonujace, prosze o skonsultowanie sie z naszym dzialem obslugi klienta: schudniecieobslugaklienta@gmail.com" << endl;
        }
    
}
void dietetyk(){

 cout << "\n\nSwietnie, teraz mozemy porozmawiac o twojej diecie.";
        cout << "\n Pamietaj ze twoje BMI wynosi: " << klient.bmi << ", wiec";
        if (klient.bmi < 18.5) {
            cout << " wskazuje na niedowagę." << endl;
        }
        else if (klient.bmi >= 18.5 && klient.bmi < 25) {
            cout << " jest w normie." << endl;
        }
        else {
            cout << " wskazuje na nadwagę." << endl;
        }


        cout << "\nOto najczesciej zadawane pytania o tematyce dieta, mam nadzieje, ze rozwieje twoje watpliwosci:\n\n";
        cout << "Pytanie 1: Czy moge stosowac interwaly glodzenia w diecie? ";

        cout << "\n\nPytanie 2: Czy suplementy odchudzajace sa bezpieczne? ";

        cout << "\n\nPytanie 3: Czy powinienem pic duzo wody podczas diety? ";

        cout << "\n\nPytanie 4: Czy moge jesc slodycze czasem w trakcie diety?";

        cout << "\n\nPytanie 5: Czy powinienem jesc przed snem?";

        cout << "\n\nPytanie 6: Czy mogę jesc przekaski w trakcie diety? ";

        cout << "\n\nPytanie 7: Czy moge zastapic mieso w diecie alternatywnymi zrodłami bialka?";

        cout << "\n\nPytanie 8: Czy moge pic alkohol podczas diety? ";

        cout << "\n\nPytanie 9: Potrzebuje inspiracji do posilkow (nieujetych w moim planie diety)";


        cout << "\n\nWpisz numer pytania na ktore odpowiedz chcesz uslyszec: ";

        cin >> odpowiedz;

        if (odpowiedz == 1) {
            cout << "\n\nInterwaly glodzenia nie sa zalecane. Wazne jest regularne spozywanie posilkow, aby utrzymac poziom energii i zdrowie.";
        }

        else if (odpowiedz == 2) {
            cout << "\n\nNiektore suplementy moga byc ryzykowne. Zawsze konsultuj sie z lekarzem lub specjalista przed rozpoczeciem stosowania jakichkolwiek suplementow.";

        }

        else if (odpowiedz == 3) {
            cout << "\n\nTak, picie odpowiedniej ilosci wody jest kluczowe.Zalecam picie co najmniej 8 szklanek wody dziennie.To pomaga w utrzymaniu nawodnienia i kontroli apetytu.";

        }

        else if (odpowiedz == 4) {
            cout << "\n\nOkazjonalne spozycie slodyczy jest akceptowalne, ale wazne jest, aby to robic z umiarem. Możemy znalezc zdrowsze alternatywy lub ustalic dni, kiedy mozna sobie pozwolic na cos slodkiego.";

        }

        else if (odpowiedz == 5) {
            cout << "\n\nJesli jestes glodny przed snem, mozesz zjesc lekki posilek, takie jak jogurt naturalny lub chudy nabial. Wazne jest, aby unikac ciezkich posilkow tuz przed snem.";

        }

        else if (odpowiedz == 6) {
            "\n\nOczywiscie, mozna spozywac przekaski, ale wazne jest, aby byly one zdrowe i dostosowane do Twojego celu. Proponuje przekaski bogate w bialko, jak orzechy lub jogurt naturalny.";
        }

        else if (odpowiedz == 7) {
            "\n\nOczywiscie, istnieje wiele alternatywnych zrodel bialka, takich jak tofu, ciecierzyca, fasola czy jaja. Moge pomoc Ci dostosowac plan diety do Twoich preferencji";
        }

        else if (odpowiedz == 8) {
            "\n\nAlkohol ma kalorie i może wpłynšć na Twoje cele dietetyczne. Jesli pijesz, zalecam ograniczenie spozycia i wybieranie niskokalorycznych napojow.";
        }

        else if (odpowiedz == 9) {
            cout << "\n\nOto kilka swietnych, prostych i zdrowych propozycji";
            cout << "\nSALATKA Z JABLKIEM, ORZECHAMI WLOSKIMI I SEREM KOZIM - https://www.kwestiasmaku.com/przepis/salatka-z-jablkiem-orzechami-wloskimi-i-serem-kozim" << std::endl;
            cout << "\nFILETY DROBIOWE PO GRECKU - https://www.kwestiasmaku.com/przepis/filety-drobiowe-po-grecku";
            cout << "\nWIOSENNA ZUPA MINESTRONE - https://www.kwestiasmaku.com/przepis/wiosenna-zupa-minestrone";
            cout << "\nCUKINIA ZAPIEKANA PO MEKSYKANSKU W WERSJI WEGE - https://www.kwestiasmaku.com/przepis/zupa-soczewicowa-z-dynia";
        }
        else {
            cout << "\n\nNie istnieje pytanie o podanym numerze, jezeli moje odpowiedzi nie sa dla Ciebie satysfakcjonujace, prosze o skonsultowanie sie z naszym dzialem obslugi klienta: schudniecieobslugaklienta@gmail.com" << endl;
        }
    
}

}


//w oryginalnym programie dane te beda pobierane na wejsciu apliakcji od uzytkowanika, ale w celu samodzielnej funkcjonalosci tego konkretnego kawalka kodu, pobieramy je od uzytkownika ponownie

int main() {
    string imie, cel, odp;
    int odpowiedz;
    int wiek;
    double wzrost, waga;

    cout << "Witaj! Wybrales opcje Rozmowa ze Specjalista. Jestem twoim wirtualnym dietetykiem oraz trenerem, odpowiem na najczesciej zadawane pytania. W przypadku, gdy moje odpowiedzi nie beda dla Ciebie satysfakcjonujace, prosze o skonsultowanie sie z naszym dzialem obslugi klienta: schudniecieobslugaklienta@gmail.com" << endl;

    cout << "\nNajpierw, potrzebuje kilka informacji o Tobie.\n";

    cout << "\nJak mam sie do Ciebie zwracac? ";
    cin >> imie;

    cout << "\n\nWitaj " << imie << "! Podaj swoj wiek: ";
    cin >> wiek;

    cout << "\n\nPodaj swoj wzrost (w centymetrach): ";
    cin >> wzrost;

    cout << "\n\nOraz swoja wage (w kilogramach): ";
    cin >> waga;

    Klient klient(imie, wiek, wzrost, waga);

    cout << "\n\nTeraz prosze o wybranie pecjalisty z ktorym chcialbys porozmawiac (wpisz trener lub dietetyk): ";
    cin.ignore();
    getline(cin, cel);



    if (cel == "dietetyk") {
klient.dietetyk;

    }
    else if (cel == "trener") {
      klient.trener;

    }
else{
    cout<<"\n\nNiepoprwany wybor specjalisty\n\n";
    
    cout<<"\n\nDziekuje za skorzystanie z moich uslug. Licze na to ze pomoglem znalezc odpwoiedzi na nurtujace Cie pytania, powodzenia w osiagnieciu celu!\n\n"
}
