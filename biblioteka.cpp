#include "include.h"
using namespace std;

biblioteka::biblioteka()
{
     //ctor
}

biblioteka::~biblioteka()
{
    //dtor
}

void biblioteka::b_push_ks(ksiazka &k)
{
    int x = 0;
    int czy_znalazlo = 0;
    for(x=0;x<lista_regal.size();x++)
    {
        if( lista_regal.at(x).get_genre() == k.get_genre() )
        {
            lista_regal.at(x).r_push_ks(k);
            czy_znalazlo = 1;
        }
    }
    if(czy_znalazlo == 0 )
    {
        regal r;
        lista_regal.push_back(r);
        lista_regal.at(lista_regal.size()-1).r_push_ks(k);
        lista_regal.at(lista_regal.size()-1).set_genre(k.get_genre());
    }
}
void biblioteka::b_push_cz(czasopismo &cz)
{
    int x = 0;
    int czy_znalazlo = 0;
    for(x=0;x<lista_regal.size();x++)
    {
        if( lista_regal.at(x).get_genre() == cz.get_genre() )
        {
            lista_regal.at(x).r_push_cz(cz);
            czy_znalazlo = 1;
        }
    }
    if(czy_znalazlo == 0 )
    {
        regal r;
        lista_regal.push_back(r);
        lista_regal.at(lista_regal.size()-1).r_push_cz(cz);
        lista_regal.at(lista_regal.size()-1).set_genre(cz.get_genre());
    }
}
int biblioteka::lista_regal_size()
{
    return lista_regal.size();
}
string biblioteka::get_genre_regal(int nr)
{
    return lista_regal.at(nr).get_genre();
}
void biblioteka::wyswietl_wszystko()
{
    for(int x=0;x<lista_regal.size();x++)
    {
        cout<<"regał nr "<<x+1<<" - "<<get_genre_regal(x)<<endl;
        cout<<"______________________"<<endl;
        lista_regal.at(x).wyswietl_regal();
    }
}
void biblioteka::wyswietl_gatunki()
{
    for(int x=0;x<lista_regal.size();x++)
    {
        cout<<"regał nr "<<x+1<<" - "<<get_genre_regal(x)<<endl;
    }
}

void biblioteka::b_find_title(string szukana)
{
    for(int x=0;x<lista_regal.size();x++)
    {
        lista_regal.at(x).r_find_title(szukana, x+1);
    }
}
void biblioteka::b_edit(int numer_regalu, int miejsce_na_regale)
{
    lista_regal.at(numer_regalu-1).r_edit(miejsce_na_regale-1);
}
