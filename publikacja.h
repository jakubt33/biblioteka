#ifndef PUBLIKACJA_H
#define PUBLIKACJA_H

using namespace std;

class publikacja
{
    public:
        publikacja(string tytul, string gatunek, int numer_karty );
        string get_title();
        string get_genre();
        string get_type();
        void set_type(string);
        void set_title(string);
        int find_title(string);
        void set_numer_karty(int);
        int get_numer_karty();
        void push();
        virtual ~publikacja();
    protected:
    private:
    string tytul;
    string gatunek;
    string typ;
    int numer_karty;
};

#endif // PUBLIKACJA_H
