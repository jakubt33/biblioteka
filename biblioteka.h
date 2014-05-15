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
        void b_find_title(string);
        void b_edit(int, int);
        void b_find_genre(string);
        int b_ilosc_regalow();
        string get_genre_regal(int nr);
        virtual ~biblioteka();
    protected:
    private:
    vector<regal> lista_regal;
};

#endif // BIBLIOTEKA_H
