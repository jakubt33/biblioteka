#include "include.h"
using namespace std;
regal::regal()
{
    //ctor
}

regal::~regal()
{
    //dtor
}
void regal::set_genre(string genre)
{
    gatunek = genre;
}
string regal::get_genre()
{
    return gatunek;
}
void regal::r_push_ks(ksiazka &ks, int nr_karty)
{
    ks.set_numer_karty(nr_karty);
    r_ks.push_back(ks);
}

void regal::r_push_cz(czasopismo &cz, int nr_karty)
{
    cz.set_numer_karty(nr_karty);
    r_cz.push_back(cz);
}

void regal::wyswietl_regal()
{
    unsigned int x = 0;
    for ( x = 0; x<r_ks.size(); x++)
    {
        r_ks.at(x).wyswietl_ksiazke();
    }
    for ( x = 0; x<r_cz.size(); x++)
    {
        r_cz.at(x).wyswietl_czasopismo();
    }
}
int regal::r_edit(int numer_karty)
{
    for(unsigned int x=0; x<r_ks.size();x++)
    {
        if(numer_karty == r_ks.at(x).get_numer_karty())
        {
            r_ks.at(x).edit();
            return 1;
        }
    }
    for(unsigned int x=0; x<r_cz.size();x++)
    {
        if(numer_karty == r_cz.at(x).get_numer_karty())
        {
            r_cz.at(x).edit();
            return 1;
        }
    }
    return 0;
}
int regal::r_usun(int numer_karty)
{
    for(unsigned int x=0; x<r_ks.size();x++)
    {
        if(numer_karty == r_ks.at(x).get_numer_karty())
        {
            r_ks.erase(r_ks.begin()+x);
            return 1;
        }
    }
    for(unsigned int x=0; x<r_cz.size();x++)
    {
        if(numer_karty == r_cz.at(x).get_numer_karty())
        {
            r_cz.erase(r_cz.begin() + x);
            return 1;
        }
    }
    return 0;
}
int regal::r_find_genre(string szukana, int x)
{
    if(get_genre() == szukana)
    {
        cout<<"regał nr "<<x<<endl;
        cout<<"_____________________"<<endl;
        wyswietl_regal();
        return 1;
    }
    else return 0;
}
int regal::r_ks_size()
{
    return r_ks.size();
}


