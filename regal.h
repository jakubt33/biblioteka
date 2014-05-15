#ifndef REGAL_H
#define REGAL_H

using namespace std;

class regal
{
    public:
        regal();
        void set_genre(string);
        string get_genre();
        void r_push_ks(ksiazka);
        void r_push_cz(czasopismo);
        void wyswietl_regal();
        virtual ~regal();
    protected:
    private:
    string gatunek;
    vector<ksiazka> r_ks;
    vector<czasopismo> r_cz;
};

#endif // REGAL_H
