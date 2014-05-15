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
    ks.set_miejsce_na_regale(r_ks.size()+1);
    r_ks.push_back(ks);

}
void regal::r_push_cz(czasopismo cz)
{
    cz.set_miejsce_na_regale(r_cz.size()+1);
    r_cz.push_back(cz);
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


