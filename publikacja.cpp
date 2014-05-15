#include "include.h"
using namespace std;

publikacja::publikacja(string tytul, string gatunek): tytul(tytul), gatunek(gatunek)
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
void publikacja::set_miejsce_na_regale(int x)
{
    miejsce_na_regale = x;
}
int publikacja::get_miejsce_na_regale()
{
    return miejsce_na_regale;
}
void publikacja::set_miejsce_w_wektorze(int x)
{
    miejsce_w_wektorze = x;
}
int publikacja::get_miejsce_w_wektorze()
{
    return miejsce_w_wektorze;
}
int publikacja::find_title(string szukana)
{
    if (tytul == szukana )
        return miejsce_na_regale;
    else return NULL;
}
void publikacja::set_type(string type)
{
    typ = type;
}
string publikacja::get_type()
{
    return typ;
}

