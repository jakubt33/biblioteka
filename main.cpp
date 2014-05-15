#include "include.h"

using namespace std;

int main()
{
    ksiazka ka("ka", "k1", "bajka"); //tytul, autor, gatunek
    ksiazka kb("kb", "k2", "bajka"); //tytul, autor, gatunek
    ksiazka kc("kc", "k3", "sci"); //tytul, autor, gatunek
    ksiazka kd("kd", "k4", "bajka"); //tytul, autor, gatunek
    czasopismo a("c5", 1, "sci"); //tytul, numer, gatunek
    czasopismo b("c6", 2, "sci"); //tytul, numer, gatunek
    czasopismo c("c7", 3, "komedia"); //tytul, nuemr, gatunek
    czasopismo d("c8", 4, "bajka"); //tytul, anumer, gatunek

    biblioteka bib;
    bib.b_push_ks(ka);
    bib.b_push_ks(kb);
    bib.b_push_ks(kc);
    bib.b_push_ks(kd);

    bib.b_push_cz(a);
    bib.b_push_cz(b);
    bib.b_push_cz(c);
    bib.b_push_cz(d);

    bib.wyswietl_wszystko();
    //bib.wyswietl_gatunki();

    // bib.wyszykaj_gatunek("sci");
    return 0;
}
