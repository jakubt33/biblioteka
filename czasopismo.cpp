#include "include.h"
using namespace std;
czasopismo::czasopismo( string tytul, int numer, string gatunek):numer(numer), publikacja(tytul, gatunek)
{
    //ctor
}

czasopismo::~czasopismo()
{
    //dtor
}
int czasopismo::get_number()
{
    return numer;
}
void czasopismo::set_number(int x)
{
    numer = x;
}

void czasopismo::wyswietl_czasopismo()
{
    cout<<"miejse:  "<<get_miejsce_na_regale()<<endl;
    cout<<"tytul:   "<<get_title()<<endl;
    cout<<"numer:   "<<numer<<endl;
    cout<<"gatunek: "<<get_genre()<<endl;
    cout<<endl;
}
