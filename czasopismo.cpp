#include "include.h"
using namespace std;

czasopismo::czasopismo( string tytul, int numer, string gatunek, int numer_karty):numer(numer), publikacja(tytul, gatunek, numer_karty)
{
    set_type("czasopismo");
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
    cout<<"tytul czasopisma:  ..  "<<get_title()<<endl;
    cout<<"numer:  .............  "<<numer<<endl;
    cout<<"nr karty bib:  ......  "<<get_numer_karty()<<endl;
    cout<<endl;
}
void czasopismo::edit()
{
    cout<<"edytujesz czasopismo:"<<endl;
    wyswietl_czasopismo();

    cout<<"nowy tytuł:"<<endl;
    string nowy_tytul;
    getline(cin,nowy_tytul);

    cout<<"nowy numer:"<<endl;
    int nowy_numer=0;
    cin>>nowy_numer;

    cout<<"zapisać? T/N"<<endl;
    string odp;
    cin>>odp;

    if(odp == "T" || odp == "t")
    {
        set_title(nowy_tytul);
        set_number(nowy_numer);
        cout<<"zapisuję"<<endl;
        cout<<"----------------"<<endl;
    }
    else cout<<"powrót do menu"<<endl;
}
