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
void regal::r_push_ks(ksiazka &ks)
{
    ks.set_miejsce_na_regale(r_ks.size()+r_cz.size()+1);
    ks.set_miejsce_w_wektorze(r_ks.size()+1);
    r_ks.push_back(ks);
}

void regal::r_push_cz(czasopismo &cz)
{
    cz.set_miejsce_na_regale(r_cz.size()+r_ks.size()+1);
    cz.set_miejsce_w_wektorze(r_cz.size()+1);
    r_cz.push_back(cz);
}
void regal::r_find_title(string szukana, int numer) //szukanie w ksiazkach
{
    int miejsce=NULL;
    for (int x = 0; x<r_ks.size(); x++)
    {
        miejsce = r_ks.at(x).find_title(szukana);
        if(miejsce != NULL)
        {
            cout<<"regal nr"<<numer<<" miejsce na r : "<<miejsce<<" - ksiazka"<<endl;
            miejsce = NULL;
        }
    }
    miejsce = NULL;
    for (int x = 0; x<r_cz.size(); x++)
    {
        miejsce = r_cz.at(x).find_title(szukana);
        if(miejsce != NULL)
        {
            cout<<"regal nr"<<numer<<" miejsce na r : "<<miejsce<<" - czasopismo"<<endl;
            miejsce = NULL;
        }
    }

}
void regal::wyswietl_regal()
{
    for (int x = 0; x<r_ks.size(); x++)
    {
        r_ks.at(x).wyswietl_ksiazke();
    }
    for (int x = 0; x<r_cz.size(); x++)
    {
        r_cz.at(x).wyswietl_czasopismo();
    }
}
void regal::r_edit(int miejsce_na_regale)
{
    if( r_ks.size() > miejsce_na_regale) //znaczy ze edytuje czasopismo
    {
        r_ks.at(miejsce_na_regale ).edit();
    }
    else
        r_cz.at(miejsce_na_regale- r_ks.size()).edit();
}


