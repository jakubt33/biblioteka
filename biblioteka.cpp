#include "include.h"
#include <fstream>
using namespace std;

biblioteka::biblioteka(string miasto):miasto(miasto)
{
     //ctor
}

biblioteka::~biblioteka()
{
    //dtor
}
void biblioteka::set_city(string x)
{
    miasto = x;
}
string biblioteka::get_city()
{
    return miasto;
}
void biblioteka::b_push_ks(ksiazka &k)
{
    unsigned int x = 0;
    int czy_znalazlo = 0;

    int numer_karty = b_get_size_pub()+1;
    lista_pub.push_back(k);

    for(x=0;x<lista_regal.size();x++)
    {
        if( lista_regal.at(x).get_genre() == k.get_genre() )
        {
            lista_regal.at(x).r_push_ks(k, numer_karty);
            czy_znalazlo = 1;
        }
    }
    if(czy_znalazlo == 0 )
    {
        regal r;
        lista_regal.push_back(r);
        lista_regal.at(lista_regal.size()-1).r_push_ks(k, numer_karty);
        lista_regal.at(lista_regal.size()-1).set_genre(k.get_genre());
    }
}
void biblioteka::b_push_cz(czasopismo &cz)
{
    unsigned int x = 0;
    int czy_znalazlo = 0;

    int numer_karty = b_get_size_pub()+1;
    lista_pub.push_back(cz);

    for(x=0;x<lista_regal.size();x++)
    {
        if( lista_regal.at(x).get_genre() == cz.get_genre() )
        {
            lista_regal.at(x).r_push_cz(cz, numer_karty);
            czy_znalazlo = 1;
        }
    }
    if(czy_znalazlo == 0 )
    {
        regal r;
        lista_regal.push_back(r);
        lista_regal.at(lista_regal.size()-1).r_push_cz(cz, numer_karty);
        lista_regal.at(lista_regal.size()-1).set_genre(cz.get_genre());
    }
}
int biblioteka::b_ilosc_regalow()
{
    return lista_regal.size();
}
string biblioteka::get_genre_regal(int nr)
{
    return lista_regal.at(nr).get_genre();
}
void biblioteka::wyswietl_wszystko()
{
    for(unsigned int x=0;x<lista_regal.size();x++)
    {
        cout<<"regał nr "<<x+1<<" - "<<get_genre_regal(x)<<endl;
        cout<<"______________________"<<endl;
        lista_regal.at(x).wyswietl_regal();
    }
}
void biblioteka::wyswietl_gatunki()
{
    for(unsigned int x=0;x<lista_regal.size();x++)
    {
        cout<<"regał nr "<<x+1<<" - "<<get_genre_regal(x)<<endl;
    }
}

void biblioteka::b_find_title(string szukana)
{
    for(unsigned int x=0;x<lista_regal.size();x++)
    {
        lista_regal.at(x).r_find_title(szukana, x+1);
    }
}
void biblioteka::b_find_genre(string szukana)
{
    cout<<"szukany gatunek: "<<szukana<<endl;
    int czy_znaleziono = 0;
    for(int x=0;x<b_ilosc_regalow();x++)
    {
        czy_znaleziono += lista_regal.at(x).r_find_genre(szukana,x+1);
    }
    if(czy_znaleziono == 0)
    cout<< "brak wyników"<<endl;
}
void biblioteka::b_edit(int numer_regalu, int miejsce_na_regale)
{
    lista_regal.at(numer_regalu-1).r_edit(miejsce_na_regale-1);
}
int biblioteka::b_get_size_pub()
{
    return lista_pub.size();
}

using namespace pugi;
void biblioteka::zapisz()
{

    xml_document doc;

    xml_node biblioteka = doc.append_child("Biblioteka");
    biblioteka.append_attribute("miasto") = get_city().c_str();

    for(unsigned int x = 0; x<lista_regal.size();x++)
    {
        xml_node regal = biblioteka.append_child("regal");
        regal.append_attribute("numer") = x+1;
        regal.append_attribute("gatunek") = get_genre_regal(x).c_str();

        for(unsigned int y=0;y<3/*lista_regal(x).r_ks.size()*/;y++)
        {
            xml_node ksiazka = regal.append_child("książka");
        }

    }
    doc.save_file("biby");
    /*
    fstream plik;
    plik.open("biblioteka.xml", fstream::out);
    if(plik.good())
    {


        plik.close();
    }
    */
}
