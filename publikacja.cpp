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
   // cout<<miejsce_na_regale;
    return miejsce_na_regale;
}
