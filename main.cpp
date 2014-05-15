#include "include.h"

using namespace std;

int main()
{
    ksiazka k("t1", "k2", "fan1"); //tytul, autor, gatunek
    ksiazka n("t2", "k2", "fan2"); //tytul, autor, gatunek
    ksiazka m("t3", "k3", "fan"); //tytul, autor, gatunek
    ksiazka p("t4", "k4", "fan"); //tytul, autor, gatunek

    biblioteka bib;
    bib.b_push_ks(k);
    bib.b_push_ks(n);
    bib.b_push_ks(m);
    bib.b_push_ks(p);

    bib.wyswietl_wszystko();

    return 0;
}
