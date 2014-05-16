#ifndef CZASOPISMO_H
#define CZASOPISMO_H

#include "publikacja.h"
using namespace std;

class czasopismo: public publikacja
{
    public:
        czasopismo(string tytul = "brak tytulu", int  numer = 0, string  gatunek = "brak", int numer_karty=0);
        int get_number();
        void set_number(int);
        void edit();
        void wyswietl_czasopismo();
        virtual ~czasopismo();
    protected:
    private:
    int numer;
};

#endif // CZASOPISMO_H
