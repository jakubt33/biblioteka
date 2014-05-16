#ifndef KSIAZKA_H
#define KSIAZKA_H

#include "publikacja.h"
using namespace std;

class ksiazka: public publikacja
{
    public:
        ksiazka( string tytul = "brak tytulu", string autor = "brak autora", string  gatunek = "brak", int numer_karty = 0);
        string get_author();
        void set_author(string);
        void edit();
        void wyswietl_ksiazke();
        virtual ~ksiazka();
    protected:
    private:
    string autor;
};

#endif // KSIAZKA_H
