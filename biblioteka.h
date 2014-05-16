#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H

class biblioteka
{
    public:
        biblioteka(string miasto = "wroclaw");

        void b_edit(int);
        void b_find_genre(string);
        void b_find_title(string);
        int b_get_size_pub();
        int b_ilosc_regalow();
        void b_push_cz(czasopismo&);
        void b_push_ks(ksiazka &);
        void b_set_nr_karty(int);
        void b_usun(int);
        string get_city();
        string get_genre_regal(int nr);
        void odczyt();
        void set_city(string);
        void wyswietl_gatunki();
        void wyswietl_wszystko();
        void zapisz();

        virtual ~biblioteka();
    protected:
    private:
    vector<regal> lista_regal;
    vector<publikacja> lista_pub;
    string miasto;
};

#endif // BIBLIOTEKA_H
