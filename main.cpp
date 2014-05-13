#include <iostream>
#include <string>
#include "publikacja.h"

using namespace std;

int main()
{
    publikacja ksiazka;
    cout << "tytul " << ksiazka.get_title() << endl;
    cout << "autor " << ksiazka.get_author() << endl;
    return 0;
}
