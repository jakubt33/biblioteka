#include "publikacja.h"
using namespace std;

publikacja::publikacja(string tytul, string autor): tytul(tytul), autor(autor)
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

string publikacja::get_author()
{
    return autor;
}
