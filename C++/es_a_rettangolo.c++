/**
 * @file es_classi.c++
 * 
 * Allenarsi con l'utilizzo delle classi con c++
 * 
 * @author Lorenzo Tarragoni
 * @date 05/12/24
*/

#include <iostream>

using namespace std;

class oggetto1
{
    private:
        double base;
        double altezza;
    public:
        int setBase(double base);
        int setAltezza(double altezza);
        int calcolaPerimetro(double x, double y);
        int calcolaArea(double x, double y);
};

int main()
{
    int base, altezza, perimetro, area;

    base = setBase(base);
    altezza = setAltezza(altezza);
    perimetro = setPerimetro(base, altezza);
    area = setAltezza(base, altezza);

    cout << "Inserisci la base:";
    
    cout << "Inserisci l'altezza";
    double oggetto1.setBase(2);

    cout << perimetro;
}

int setBase(double base)
{
    return base;
}

int setAltezza(double altezza)
{
    return altezza;
}

int calcolaPerimetro(double base, double altezza)
{
    perimetro = 2(base + altezza);

    return perimetro;
}