#ifndef REGAL_H
#define REGAL_H

using namespace std;

class regal
{
    public:
        regal();
        void set_genre(string);
        string get_genre();
        void r_push_ks(ksiazka&, int);
        void r_push_cz(czasopismo&, int);
        void r_push_pu(publikacja&, int);
        void wyswietl_regal();
        void r_find_title(string, int);
        int r_find_genre(string, int);
        void r_edit(int);
        virtual ~regal();
    protected:
    private:
    string gatunek;
    vector<ksiazka> r_ks;
    vector<czasopismo> r_cz;
};

#endif // REGAL_H
