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
        int r_find_genre(string, int);
        int r_edit(int);
        int r_usun(int);
        int r_ks_size();
        int r_cz_size();
        string r_get_ks_title(int);
        string r_get_cz_title(int);
        int r_get_ks_number(int);
        int r_get_cz_number(int);
        virtual ~regal();
    protected:
    private:
    string gatunek;
    vector<ksiazka> r_ks;
    vector<czasopismo> r_cz;
};

#endif // REGAL_H
