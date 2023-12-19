#include <iostream>
#include "OperacieSlova.h"
#include "OperacieSubor.h"

int main()
{
    OperacieSlova operacieSlova;
    OperacieSubor operacieSubor;

    std::string nazovSuboru = "slova.txt";
    operacieSubor.citajZoSuboru(nazovSuboru, operacieSlova.getZoznamSlov());
    
    operacieSlova.usporiadajKlesajuco();
    operacieSlova.vypisZoznamSlov();
    operacieSlova.vypisRovnakeSlova();

    return 0;
}