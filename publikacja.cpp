#include "include.h"
using namespace std;

publikacja::publikacja(string tytul, string gatunek, int numer_karty): tytul(tytul), gatunek(gatunek), numer_karty(numer_karty)
{
}

publikacja::~publikacja()
{
    //dtor
}

string publikacja::get_title()
{
    return tytul;
}

string publikacja::get_genre()
{
    return gatunek;
}
void publikacja::set_numer_karty(int x)
{
    numer_karty = x;
}
int publikacja::get_numer_karty()
{
    return numer_karty;
}

int publikacja::find_title(string szukana)
{
    if (tytul == szukana )
        return numer_karty;
    else return 0;
}
void publikacja::set_type(string type)
{
    typ = type;
}
string publikacja::get_type()
{
    return typ;
}
void publikacja::set_title(string x)
{
    tytul = x;
}

