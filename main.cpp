#include "include.h"

using namespace std;

int main()
{
    ksiazka k("tyt", "kub", "fan"); //tytul, autor, gatunek
    ksiazka n("t2", "k2", "fan"); //tytul, autor, gatunek
    ksiazka m("t3", "k3", "fan"); //tytul, autor, gatunek

    biblioteka bib;
    bib.b_push_ks(k);
    bib.b_push_ks(n);
    bib.b_push_ks(m);

    cout << "tytul  " << k.get_title() << endl;
    cout << "autor " << k.get_author() << endl;
    cout << "regal  " << k.get_genre() << endl;

    return 0;
}
