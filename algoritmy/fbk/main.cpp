#include <iostream>
#include <ctime>
#include "Zapasy.h"
#include "OperacieSubor.h"

int main()
{
    std::srand(std::time(0));
    Zapasy zapasy;
    OperacieSubor operacieSubor;

    std::string nazovSuboru = "ZoznamKrajin.txt";
    operacieSubor.nacitajZoSuboru(nazovSuboru, zapasy.getFutbaloveKrajiny());
    zapasy.odohrajZapasy();
    zapasy.vyhodnotZapasy();
    zapasy.zoradenyVec();
    zapasy.vypis();
    zapasy.nacitajCisloVypis();

    return 0;
}