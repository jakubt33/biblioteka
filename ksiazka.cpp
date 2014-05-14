#include "include.h"

using namespace std;

ksiazka::ksiazka( string tytul, string autor, string gatunek):autor(autor), publikacja(tytul, gatunek)
{
       //ctor
}

ksiazka::~ksiazka()
{
    //dtor
}

string ksiazka::get_author()
{
    return autor;
}

