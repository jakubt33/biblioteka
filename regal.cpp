#include "include.h"
using namespace std;

regal::regal(){
    //ctor
}

regal::~regal(){
    //dtor
}

string regal::get_genre(){
    return gatunek;
}

int regal::r_cz_size(){
    return r_cz.size();
}

int regal::r_edit(int numer_karty){
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

int regal::r_find_genre(string szukana, int x){
    if( strstr(get_genre().c_str(), szukana.c_str()) != NULL)
    {
        cout<<"regał nr "<<x<<" - "<<get_genre()<<endl;
        cout<<"_____________________"<<endl;
        wyswietl_regal();
        return 1;
    }
    else return 0;
}

string regal::r_get_author(int miejsce){
    return r_ks.at(miejsce).get_author();
}

int regal::r_get_cz_number(int miejsce){
    return r_cz.at(miejsce).get_numer_karty();
}

string regal::r_get_cz_title(int miejsce){
    return r_cz.at(miejsce).get_title();
}

int regal::r_get_ks_number(int miejsce){
    return r_ks.at(miejsce).get_numer_karty();
}

string regal::r_get_ks_title(int miejsce){
    return r_ks.at(miejsce).get_title();
}

int regal::r_get_number(int miejsce){
    return r_cz.at(miejsce).get_number();
}

int regal::r_ks_size(){
    return r_ks.size();
}

void regal::r_push_cz(czasopismo &cz, int nr_karty){
    cz.set_numer_karty(nr_karty);
    r_cz.push_back(cz);
}

void regal::r_push_ks(ksiazka &ks, int nr_karty){
    ks.set_numer_karty(nr_karty);
    r_ks.push_back(ks);
}

int regal::r_usun(int numer_karty){
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

void regal::set_genre(string genre){
    gatunek = genre;
}

void regal::wyswietl_regal(){
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

