#include "Vlak.h"

void Vlak::setNazovVlaku(int nazov)
{
    nazovVlaku = nazov;
}

int Vlak::getNazovVlaku()
{
    return nazovVlaku;
}

void Vlak::pridajZastavku(std::string zastavka)
{
    zastavky.push_back(zastavka);
}

std::vector<std::string>& Vlak::getZastavky()
{
    return zastavky;
}
