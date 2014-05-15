#ifndef CZASOPISMO_H
#define CZASOPISMO_H

#include "publikacja.h"
using namespace std;

class czasopismo: public publikacja
{
    public:
        czasopismo(string tytul = "brak tytulu", int  numer = 0, string  gatunek = "bajka");
        int get_number();
        void set_number(int);
        void wyswietl_czasopismo();
        virtual ~czasopismo();
    protected:
    private:
    int numer;
};

#endif // CZASOPISMO_H
