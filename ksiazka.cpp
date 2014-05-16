#include "include.h"
using namespace std;

ksiazka::ksiazka( string tytul, string autor, string gatunek, int numer_karty):autor(autor), publikacja(tytul, gatunek, numer_karty)
{
    set_type("ksiazka");
}

ksiazka::~ksiazka()
{
    //dtor
}

string ksiazka::get_author()
{
    return autor;
}
void ksiazka::set_author(string x)
{
    autor = x;
}
void ksiazka::wyswietl_ksiazke()
{
    cout<<"tytul książki:  .....  "<<get_title()<<endl;
    cout<<"autor:  .............  "<<autor<<endl;
    cout<<"nr karty bib:  ......  "<<get_numer_karty()<<endl;
    cout<<endl;
}
void ksiazka::edit()
{
    cout<<"edytujesz książkę:"<<endl;
    wyswietl_ksiazke();

    cout<<"nowy tytuł:"<<endl;
    string nowy_tytul;
    getline(cin,nowy_tytul);

    cout<<"nowy autor:"<<endl;
    string nowy_autor;
    getline(cin,nowy_autor);

    cout<<"zapisać? T/N"<<endl;
    string odp;
    cin>>odp;

    if(odp == "T" || odp == "t")
    {
        set_title(nowy_tytul);
        set_author(nowy_autor);
        cout<<"zapisuję"<<endl;
        cout<<"----------------"<<endl;
    }
    else cout<<"powrót do menu"<<endl;
}
