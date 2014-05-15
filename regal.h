#ifndef REGAL_H
#define REGAL_H

using namespace std;

class regal
{
    public:
        regal();
        void set_genre(string);
        string get_genre();
        void r_push_ks(ksiazka&);
        void r_push_cz(czasopismo&);
        void r_push_pu(publikacja&);
        void wyswietl_regal();
        void r_find_title(string, int);
        void r_edit(int);
        virtual ~regal();
    protected:
    private:
    string gatunek;
    vector<ksiazka> r_ks;
    vector<czasopismo> r_cz;
};

#endif // REGAL_H
