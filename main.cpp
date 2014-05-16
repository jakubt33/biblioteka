#include "include.h"
using namespace std;

int main()
{
    czasopismo a("cta", 1, "C++"); //tytul, numer, gatunek
    czasopismo b("ctb", 2, "Sci-fi"); //tytul, numer, gatunek
    czasopismo c("Jak", 3, "C++"); //tytul, nuemr, gatunek
    czasopismo d("Przygody Tomka Programisty", 10, "Historyczny"); //tytul, anumer, gatunek

    ksiazka ka("Dziedziczenie na gotowym przykładzie klasy biblioteka", "Jakub Trzyna", "C++"); //tytul, autor, gatunek
    ksiazka kb("Jak", "Jakub", "C++"); //tytul, autor, gatunek
    ksiazka kc("Kubuś Puchatek", "Bolesaw Chrobry", "Historyczny"); //tytul, autor, gatunek
    ksiazka kd("jaksa", "kad", "Sci-fi"); //tytul, autor, gatunek

    biblioteka bib;

    /*
    bib.b_push_ks(ka);
    bib.b_push_ks(kb);
    bib.b_push_ks(kc);
    bib.b_push_ks(kd);

    bib.b_push_cz(a);
    bib.b_push_cz(b);
    bib.b_push_cz(c);
    bib.b_push_cz(d);
    */

    //bib.b_edit(2);
    //bib.b_usun(5);

    //bib.wyswietl_wszystko();
    //bib.b_find_title("Jak"); //zrobic wyszukiwanie podciągu, cale nazwy dziala
    //bib.wyswietl_gatunki();
    //bib.b_find_genre("c");

    //bib.zapisz();
    bib.odczyt(); //musi usuwac poprzednią bibe
    bib.wyswietl_wszystko();

    return 0;
}
