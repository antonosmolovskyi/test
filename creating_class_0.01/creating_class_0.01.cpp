#include <iostream>


using namespace std;


class Klient
{
public:
    string nick;
    string gatunek_muzyki;
    char plec;
    string zainteresowania;

protected:
    string imię_nazwisko;
    string mail;
    int dzień_urodzenia;
    int miesiąc_urodzenia;
    int rok_urodzenia;
    string telefon;
    string konta_aplikacji_muzycznych;
    string kolor_oczy;
    string kolor_włosów;
    int wzrost;
    int waga;
    string wojewódstwo;
    string cechy_charakteru;
};
class Konto : Klient
{
public:
    string Print(string status)
    {
        status = status_premium;
        return status;
    }
protected:
    string status_premium;
    int lista_znajomych;
    int dodaj_do_znajomych;
    int block_użytkowników;
    int dodaj_muzyke;
    string ulubione_profile;
};

class Product
{
protected:
    string nazwa;
    double cena;
};

class Pozycja_faktury : Product
{
protected:
    int numer_faktury;
    int opłata_za_konto_premium;
    double saldo_konta;
};

class Faktura : Konto, Product
{
protected:
    int iłość_faktur;
    int waluta;
    double suma_do_zapłaty;
    double opłacono;
    int dzień_dałączenia_faktury;
    int miesiąc_dałączenia_faktury;
    int rok_dałączenia_faktury;
};

class Platnosc : Faktura
{
protected:
    int id_konta;
    double numer_rachunku;
    double forma_płatności;
};

class Szablon_wydruku
{
protected:
    string kolor_czcionki;
    string krój_czcionki;
    int wielkość_czcionki;
    int jakość_wydruku;
};

class Dobieranie_par : Klient
{
protected:
    char plec_pary;
    int przedział_wiekowy;
    int gatunki_muzyki_pary;
    int kolor_włosów_pary;
    int kolor_oczy_pary;
    int wzrost_pary;
    string wojewódstwo_pary;
    string cehy_harakteru_pary;
};



int main()
{
    
}

