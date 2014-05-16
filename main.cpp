#include "include.h"
#include <string>
using namespace std;

int main()
{
    czasopismo a("cta", 1, "sci"); //tytul, numer, gatunek
    czasopismo b("ctb", 2, "sci"); //tytul, numer, gatunek
    czasopismo c("ctc", 3, "komedia"); //tytul, nuemr, gatunek
    czasopismo d("ctd", 4, "bajka"); //tytul, anumer, gatunek

    ksiazka ka("kta", "kaa", "bajka"); //tytul, autor, gatunek
    ksiazka kb("ktb", "kab", "bajka"); //tytul, autor, gatunek
    ksiazka kc("ktc", "kac", "sci"); //tytul, autor, gatunek
    ksiazka kd("ktd", "kad", "bajka"); //tytul, autor, gatunek


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

    //bib.b_edit(2); //dziala
    //bib.b_usun(5); //dziala


    //bib.wyswietl_wszystko(); //dziala
    //bib.b_find_title("kub"); //zrobic wyszukiwanie podciągu, cale nazwy dziala
    //bib.wyswietl_gatunki();//dziala
    //bib.b_find_genre("bajka");//dzuala

    //bib.zapisz();
    bib.odczyt();
    bib.wyswietl_wszystko();

    return 0;
}
