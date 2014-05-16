#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H

#include <vector>
#include "regal.h"

class biblioteka
{
    public:
        biblioteka(string miasto = "wroclaw");
        void b_push_ks(ksiazka &);
        void b_push_cz(czasopismo&);
        void wyswietl_wszystko();
        void wyswietl_gatunki();
        void b_find_title(string);
        void b_edit(int);
        void b_find_genre(string);
        int b_ilosc_regalow();
        string get_genre_regal(int nr);
        string get_city();
        void zapisz();
        void set_city(string);
        int b_get_size_pub();
        virtual ~biblioteka();
    protected:
    private:
    vector<regal> lista_regal;
    vector<publikacja> lista_pub;
    string miasto;
};

#endif // BIBLIOTEKA_H
