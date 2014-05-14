#include <iostream>
#include <string>
#pragma once
#include "publikacja.h"
#include "ksiazka.h"

using namespace std;

int main()
{
    ksiazka k("tyt", "kub", "fan"); //tytul, autor, gatunek
    cout << "tytul  " << k.get_title() << endl;
    cout << "autor " << k.get_author() << endl;
    cout << "gatunek  " << k.get_genre() << endl;

    return 0;
}
