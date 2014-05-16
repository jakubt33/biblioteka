#include "include.h"

using namespace std;

ksiazka::ksiazka( string tytul, string autor, string gatunek, int nr_karty):autor(autor), publikacja(tytul, gatunek)
{
    set_type("ksiazka");
    set_numer_karty(nr_karty);
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
    cin>>nowy_tytul;

    cout<<"nowy autor:"<<endl;
    string nowy_autor;
    cin>>nowy_autor;

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
