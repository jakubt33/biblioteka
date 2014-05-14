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
        virtual ~regal();
    protected:
    private:
    string gatunek;
    vector<ksiazka> r;
};

#endif // REGAL_H
