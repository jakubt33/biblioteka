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
 void regal::r_push_ks(ksiazka ks)
 {
     r.push_back(ks);
 }
 void regal::wyswietl_regal()
 {
     for (int x = 0; x<r.size(); x++)
     {
         r.at(x).wyswietl_ksiazke();
     }
 }

