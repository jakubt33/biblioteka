#ifndef PUBLIKACJA_H
#define PUBLIKACJA_H
using namespace std;

class publikacja
{
    public:
        publikacja(string tytul, string gatunek, int numer_karty );

        int find_title(string);
        int get_numer_karty();
        string get_genre();
        string get_title();
        string get_type();
        void push();
        void set_numer_karty(int);
        void set_title(string);
        void set_type(string);
        void wyswietl_publikacje();

        virtual ~publikacja();
    protected:
    private:
    string tytul;
    string gatunek;
    string typ;
    int numer_karty;
};

#endif // PUBLIKACJA_H
