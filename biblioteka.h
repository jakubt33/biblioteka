#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H
#include <vector>
#include "regal.h"


class biblioteka
{
    public:
        biblioteka();
        void b_push_ks(ksiazka&);
        virtual ~biblioteka();
    protected:
    private:
    vector<regal> lista_regal;
};

#endif // BIBLIOTEKA_H
