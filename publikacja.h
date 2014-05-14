#ifndef PUBLIKACJA_H
#define PUBLIKACJA_H

#include <string>
using namespace std;

class publikacja
{
    public:
        publikacja(string tytul = "brak tytulu", string gatunek = "bajka" );
        string get_title();
        string get_genre();
        virtual ~publikacja();
    protected:
    private:
    string tytul;
    string gatunek;
};

#endif // PUBLIKACJA_H
