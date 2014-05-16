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
void regal::r_find_title(string szukana, int numer) //szukanie w ksiazkach
{
    int miejsce=0;
    unsigned int x=0;
    for ( x = 0; x<r_ks.size(); x++)
    {
        miejsce = r_ks.at(x).find_title(szukana);
        if(miejsce != 0)
        {
            cout<<"regal nr"<<numer<<" miejsce na r : "<<miejsce<<" - ksiazka"<<endl;
            miejsce = 0;
        }
    }
    miejsce = 0;
    for ( x = 0; x<r_cz.size(); x++)
    {
        miejsce = r_cz.at(x).find_title(szukana);
        if(miejsce != 0)
        {
            cout<<"regal nr"<<numer<<" miejsce na r : "<<miejsce<<" - czasopismo"<<endl;
            miejsce = 0;
        }
    }

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
void regal::r_edit(int miejsce_na_regale)
{
    if( r_ks.size() > miejsce_na_regale)
    {
        r_ks.at(miejsce_na_regale ).edit();
    }
    else
        r_cz.at(miejsce_na_regale- r_ks.size()).edit();
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


