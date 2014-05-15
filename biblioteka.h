#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H

#include <vector>
#include "regal.h"

class biblioteka
{
    public:
        biblioteka();
        void b_push_ks(ksiazka &);
        void b_push_cz(czasopismo&);
        void wyswietl_wszystko();
        void wyswietl_gatunki();
        int lista_regal_size();
        string get_genre_regal(int nr);
        virtual ~biblioteka();
    protected:
    private:
    vector<regal> lista_regal;
};

#endif // BIBLIOTEKA_H
