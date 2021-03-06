#include "include.h"

using namespace std;
using namespace pugi;

biblioteka::biblioteka(string miasto):miasto(miasto){
    //ctor
}

biblioteka::~biblioteka(){
    //dtor
}

void biblioteka::b_edit(int numer_karty){
    unsigned int x = 0;
    while( x<lista_regal.size())
    {
        if (lista_regal.at(x).r_edit(numer_karty))
            x=lista_regal.size()+1;
        x++;
    }
    if(x == lista_regal.size())
        cout<<"brak publikacji o wskazanym numerze karty bibliotecznej"<<endl;
}

void biblioteka::b_find_genre(string szukana){
    cout<<"szukany gatunek: "<<szukana<<endl;
    int czy_znaleziono = 0;
    for(int x=0; x<b_ilosc_regalow(); x++)
    {
        czy_znaleziono += lista_regal.at(x).r_find_genre(szukana,x+1);
    }
    if(czy_znaleziono == 0)
        cout<< "brak wyników"<<endl;
}

void biblioteka::b_find_title(string szukana){
    cout<<"szukany tytuł: "<<szukana<<endl;
    int czy_znalazlo = 0;
    for(unsigned int x=0; x<lista_pub.size(); x++)
    {
        if( strstr(lista_pub.at(x).get_title().c_str(), szukana.c_str())!=NULL)
        {
            cout<<endl;
            lista_pub.at(x).wyswietl_publikacje();
            czy_znalazlo += 1;
        }
    }
    if(czy_znalazlo == 0)
        cout << "brak publikacji o takim tytule"<<endl;

}

int biblioteka::b_get_size_pub(){
    return lista_pub.size();
}

int biblioteka::b_ilosc_regalow(){
    return lista_regal.size();
}

void biblioteka::b_push_cz(czasopismo &cz){
    unsigned int x = 0;
    int numer_karty, czy_znalazlo = 0;

    lista_pub.push_back(cz);

    if(cz.get_numer_karty() == 0 )
       {
            numer_karty = b_get_size_pub();
            lista_pub.at(numer_karty-1).set_numer_karty(numer_karty);
       }
    else numer_karty = cz.get_numer_karty();

    for(x=0; x<lista_regal.size(); x++)
    {
        if( lista_regal.at(x).get_genre() == cz.get_genre() )
        {
            lista_regal.at(x).r_push_cz(cz, numer_karty);
            czy_znalazlo = 1;
        }
    }
    if(czy_znalazlo == 0 )
    {
        regal r;
        lista_regal.push_back(r);
        lista_regal.at(lista_regal.size()-1).r_push_cz(cz, numer_karty);
        lista_regal.at(lista_regal.size()-1).set_genre(cz.get_genre());
    }
}

void biblioteka::b_push_ks(ksiazka &k){
    unsigned int x = 0;
    int numer_karty=0, czy_znalazlo = 0;

    lista_pub.push_back(k);
    if(k.get_numer_karty() == 0 )
       {
            numer_karty = b_get_size_pub();
            lista_pub.at(numer_karty-1).set_numer_karty(numer_karty);
       }
    else numer_karty = k.get_numer_karty();

    for(x=0; x<lista_regal.size(); x++)
    {
        if( lista_regal.at(x).get_genre() == k.get_genre() )
        {
            lista_regal.at(x).r_push_ks(k, numer_karty);
            czy_znalazlo = 1;
        }
    }
    if(czy_znalazlo == 0 )
    {
        regal r;
        lista_regal.push_back(r);
        lista_regal.at(lista_regal.size()-1).r_push_ks(k, numer_karty);
        lista_regal.at(lista_regal.size()-1).set_genre(k.get_genre());
    }
}

void biblioteka::b_usun(int numer_karty){
    unsigned int x = 0;
    cout<<"usuwanie publikacji o numerze karty bibliotecznej: "<<numer_karty<<endl;
    while( x<lista_regal.size())
    {
        if (lista_regal.at(x).r_usun(numer_karty))
            x=lista_regal.size()+1;
        x++;
    }
    if(x == lista_regal.size())
        cout<<"brak publikacji o wskazanym numerze karty bibliotecznej"<<endl;
    else
    {
        while( x<lista_pub.size())
        {
            if (lista_pub.at(x).get_numer_karty() == numer_karty)
            {
                lista_pub.erase(lista_pub.begin()+x);
                x=lista_pub.size()+1;
            }
            x++;
        }
    }
}

string biblioteka::get_genre_regal(int nr){
    return lista_regal.at(nr).get_genre();
}

string biblioteka::get_city(){
    return miasto;
}

void biblioteka::odczyt(){
    xml_document doc;
    if(doc.load_file("doc.xml"))
    {
        lista_pub.clear();
        lista_regal.clear();

        xml_node bib = doc.child("biblioteka");
        set_city(bib.attribute("miasto").value());

        xml_node r=bib.child("regal");
        string gatunek_r = r.attribute("gatunek").value();
        if( !gatunek_r.empty() )
        {
            do
            {

                //dodawanie książki.....................................................
                xml_node ks=r.child("ksiazka");
                string autor_ks, tytul_ks = ks.attribute("tytul").value();
                int nr_karty_ks;
                if( !tytul_ks.empty() )
                {
                    do
                    {
                        autor_ks = ks.attribute("autor").value();

                        nr_karty_ks = atoi(ks.attribute("nr_karty_bibliotecznej").value());
                        tytul_ks = ks.attribute("tytul").value();

                        if (!tytul_ks.empty())
                        {
                            ksiazka temp(tytul_ks, autor_ks, gatunek_r, nr_karty_ks);
                            b_push_ks(temp);
                            ks=ks.next_sibling("ksiazka");
                        }

                    }   while ( !tytul_ks.empty() );
                }
                //dodawanie książki.....................................................


                //dodawanie czasopisma..................................................
                xml_node cz=r.child("czasopismo");
                string tytul_cz = cz.attribute("tytul").value();
                int nr_karty_cz, numer_cz;
                if( !tytul_cz.empty() )
                {
                    do
                    {

                        numer_cz = atoi( cz.attribute("numer").value());
                        nr_karty_cz = atoi(cz.attribute("nr_karty_bibliotecznej").value());

                        tytul_cz = cz.attribute("tytul").value();
                        if (!tytul_cz.empty())
                        {
                            czasopismo temp(tytul_cz, numer_cz, gatunek_r, nr_karty_cz);
                            b_push_cz(temp);
                            cz=cz.next_sibling("czasopismo");
                        }

                    }   while ( !tytul_cz.empty() );
                }
                //dodawanie czasopisma..................................................


                r=r.next_sibling("regal");
                gatunek_r = r.attribute("gatunek").value();
            }
            while ( !gatunek_r.empty() );
        }
    }
}

void biblioteka::set_city(string x){
    miasto = x;
}

void biblioteka::wyswietl_gatunki(){
    for(unsigned int x=0; x<lista_regal.size(); x++)
    {
        cout<<"regał nr "<<x+1<<" - "<<get_genre_regal(x)<<endl;
    }
}

void biblioteka::wyswietl_wszystko(){
    cout<<"biblioteka, "<<get_city()<<endl;
    for(unsigned int x=0; x<lista_regal.size(); x++)
    {
        cout<<"regał nr "<<x+1<<" - "<<get_genre_regal(x)<<endl;
        cout<<"______________________"<<endl;
        lista_regal.at(x).wyswietl_regal();
    }
}

void biblioteka::zapisz(){

    xml_document doc;

    xml_node biblioteka = doc.append_child("biblioteka");
    biblioteka.append_attribute("miasto") = get_city().c_str();

    for(unsigned int x = 0; x<lista_regal.size(); x++)
    {
        xml_node regal = biblioteka.append_child("regal");
        regal.append_attribute("numer") = x+1;
        regal.append_attribute("gatunek") = get_genre_regal(x).c_str();

        for(unsigned int y=0; y<lista_regal.at(x).r_ks_size(); y++)
        {
            xml_node ksiazka = regal.append_child("ksiazka");
            ksiazka.append_attribute("tytul") = lista_regal.at(x).r_get_ks_title(y).c_str();
            ksiazka.append_attribute("autor") = lista_regal.at(x).r_get_author(y).c_str();
            ksiazka.append_attribute("nr_karty_bibliotecznej") = lista_regal.at(x).r_get_ks_number(y);
        }
        for(unsigned int y=0; y<lista_regal.at(x).r_cz_size(); y++)
        {
            xml_node czasopismo = regal.append_child("czasopismo");
            czasopismo.append_attribute("tytul") = lista_regal.at(x).r_get_cz_title(y).c_str();
            czasopismo.append_attribute("numer") = lista_regal.at(x).r_get_number(y);
            czasopismo.append_attribute("nr_karty_bibliotecznej") = lista_regal.at(x).r_get_cz_number(y);
        }

    }
    doc.save_file("doc.xml");
}

