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

void ksiazka::wyswietl_ksiazke()
{
    cout<<"miejsce: "<<get_miejsce_na_regale()<<endl;
    cout<<"tytul:   "<<get_title()<<endl;
    cout<<"autor:   "<<autor<<endl;
    cout<<"gatunek: "<<get_genre()<<endl;
    cout<<endl;
}
