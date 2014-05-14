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
    if(lista_regal.size() == 0)
    {
        regal r1;
        lista_regal.push_back(r1);
        lista_regal.at(0).r_push_ks(k);
        lista_regal.at(0).set_genre(k.get_genre());
    }

}
