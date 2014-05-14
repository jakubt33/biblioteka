#ifndef KSIAZKA_H
#define KSIAZKA_H

#include "publikacja.h"
using namespace std;

class ksiazka: public publikacja
{
    public:
        ksiazka( string tytul = "brak tytulu", string autor = "brak autora", string  gatunek = "bajka");
        string get_author();
        virtual ~ksiazka();
    protected:
    private:
    string autor;
};

#endif // KSIAZKA_H
