#include "include.h"
using namespace std;

publikacja::publikacja(string tytul, string gatunek, int numer_karty): tytul(tytul), gatunek(gatunek), numer_karty(numer_karty){
}

publikacja::~publikacja(){
    //dtor
}

int publikacja::find_title(string szukana){
    if (tytul == szukana )
        return numer_karty;
    else return 0;
}

string publikacja::get_genre(){
    return gatunek;
}

int publikacja::get_numer_karty(){
    return numer_karty;
}

string publikacja::get_title(){
    return tytul;
}

string publikacja::get_type(){
    return typ;
}

void publikacja::set_numer_karty(int x){
    numer_karty = x;
}

void publikacja::set_title(string x){
    tytul = x;
}

void publikacja::set_type(string type){
    typ = type;
}

void publikacja::wyswietl_publikacje(){
    cout<<"tytul książki:  .....  "<<tytul<<endl;
    cout<<"nr karty bib:  ......  "<<numer_karty<<endl;
    cout<<endl;
}

