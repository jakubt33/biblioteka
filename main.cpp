#include "include.h"
#include <string>
using namespace std;

int main()
{
    czasopismo a("c5", 1, "sci"); //tytul, numer, gatunek
    czasopismo b("c6", 2, "sci"); //tytul, numer, gatunek
    czasopismo c("c7", 3, "komedia"); //tytul, nuemr, gatunek
    czasopismo d("c8", 4, "bajka"); //tytul, anumer, gatunek

    ksiazka ka("kubus", "k1", "bajka"); //tytul, autor, gatunek
    ksiazka kb("kubu", "k2", "bajka"); //tytul, autor, gatunek
    ksiazka kc("kub", "k3", "sci"); //tytul, autor, gatunek
    ksiazka kd("kubus", "k4", "bajka"); //tytul, autor, gatunek


    biblioteka bib;
    bib.b_push_ks(ka);
    bib.b_push_ks(kb);
    bib.b_push_ks(kc);
    bib.b_push_ks(kd);

    bib.b_push_cz(a);
    bib.b_push_cz(b);
    bib.b_push_cz(c);
    bib.b_push_cz(d);

    //bib.b_edit(2); //dziala
    //bib.b_usun(3); //dziala


    //bib.wyswietl_wszystko(); //dziala
    //bib.b_find_title("kub"); //zrobic wyszukiwanie podciągu, cale nazwy dziala
    //bib.wyswietl_gatunki();//dziala
    //bib.b_find_genre("bajka");//dzuala

    bib.zapisz();

    return 0;
}
