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
