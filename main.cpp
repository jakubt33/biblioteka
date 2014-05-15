#include "include.h"

using namespace std;

int main()
{
    ksiazka k("k1", "k2", "bajka"); //tytul, autor, gatunek
    ksiazka n("k2", "k2", "bajka"); //tytul, autor, gatunek
    ksiazka m("k3", "k3", "sci"); //tytul, autor, gatunek
    ksiazka p("k4", "k4", "bajka"); //tytul, autor, gatunek
    czasopismo a("c5", 1, "sci"); //tytul, numer, gatunek
    czasopismo b("c6", 2, "sci"); //tytul, numer, gatunek
    czasopismo c("c7", 3, "komedia"); //tytul, nuemr, gatunek
    czasopismo d("c8", 4, "bajka"); //tytul, anumer, gatunek

    biblioteka bib;
    bib.b_push_ks(k);
    bib.b_push_ks(n);
    bib.b_push_ks(m);
    bib.b_push_ks(p);

    bib.b_push_cz(a);
    bib.b_push_cz(b);
    bib.b_push_cz(c);
    bib.b_push_cz(d);

    bib.wyswietl_wszystko();
    bib.wyswietl_gatunki();
    return 0;
}
