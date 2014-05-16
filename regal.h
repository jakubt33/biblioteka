#ifndef REGAL_H
#define REGAL_H
using namespace std;

class regal
{
    public:
        regal();

        string get_genre();
        void set_genre(string);
        int r_cz_size();
        int r_edit(int);
        int r_find_genre(string, int);
        string r_get_author(int);
        string r_get_cz_title(int);
        int r_get_cz_number(int);
        int r_get_ks_number(int);
        string r_get_ks_title(int);
        int r_get_number(int);
        int r_ks_size();
        void r_push_ks(ksiazka&, int);
        void r_push_cz(czasopismo&, int);
        void r_push_pu(publikacja&, int);
        int r_usun(int);
        void wyswietl_regal();

        virtual ~regal();
    protected:
    private:
    string gatunek;
    vector<ksiazka> r_ks;
    vector<czasopismo> r_cz;
};

#endif // REGAL_H
