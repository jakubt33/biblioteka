#ifndef PUBLIKACJA_H
#define PUBLIKACJA_H

#include <string>
using namespace std;

class publikacja
{
    public:
        publikacja(string tytul = "kubus puchatek", string autor = "trzyna");
        string get_title();
        string get_author();
        virtual ~publikacja();
    protected:
    private:
    string tytul;
    string autor;
};

#endif // PUBLIKACJA_H
