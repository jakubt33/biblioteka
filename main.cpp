#include "include.h"
using namespace std;

int main()
{
    czasopismo ca("Ali Baba i 40 programistów", 1, "C++"); //tytul, numer, gatunek
    czasopismo cb("Jak przygotować się do sesji w tydzień ", 1001, "Sci-fi"); //tytul, numer, gatunek
    czasopismo cc("Monty Python", 101, "C++"); //tytul, nuemr, gatunek
    czasopismo cd("Przygody Tomka Programisty", 10, "Historyczny"); //tytul, anumer, gatunek

    ksiazka ka("Kubuś Puchatek", "Bolesaw Chrobry", "Historyczny"); //tytul, autor, gatunek
    ksiazka kb("5 powodów dla których warto oceniać na 5.0", "Mariusz Ostrowski", "C++"); //tytul, autor, gatunek
    ksiazka kc("Dziedziczenie na gotowym przykładzie klasy biblioteka", "Jakub Trzyna", "C++"); //tytul, autor, gatunek
    ksiazka kd("W pustyni i w puszczy", "Gal Anonim", "Sci-fi"); //tytul, autor, gatunek

    biblioteka bib;

    bib.b_push_ks(ka);
    bib.b_push_ks(kb);
    bib.b_push_ks(kc);
    bib.b_push_ks(kd);

    bib.b_push_cz(ca);
    bib.b_push_cz(cb);
    bib.b_push_cz(cc);
    bib.b_push_cz(cd);

    /*
    bib.b_find_title("po");
    bib.wyswietl_gatunki();
    bib.b_find_genre("C++");
    */


    /*
    bib.wyswietl_wszystko();
    bib.b_edit(2);
    bib.b_usun(5);
    bib.wyswietl_wszystko();
    bib.zapisz();
    */

    /*
    bib.odczyt();
    bib.wyswietl_wszystko();
    */

    return 0;
}
