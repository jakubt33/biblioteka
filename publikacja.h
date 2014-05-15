#ifndef PUBLIKACJA_H
#define PUBLIKACJA_H

using namespace std;

class publikacja
{
    public:
        publikacja(string tytul = "brak tytulu", string gatunek = "bajka" );
        string get_title();
        string get_genre();
        string get_type();
        void set_type(string);
        void set_miejsce_w_wektorze(int);
        int get_miejsce_w_wektorze();
        int find_title(string);
        void set_miejsce_na_regale(int);
        int get_miejsce_na_regale();
        void push();
        virtual ~publikacja();
    protected:
    private:
    string tytul;
    string gatunek;
    string typ;
    int miejsce_na_regale;
    int miejsce_w_wektorze;
};

#endif // PUBLIKACJA_H
