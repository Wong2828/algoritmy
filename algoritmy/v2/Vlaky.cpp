#include "Vlaky.h"

std::vector<Vlak>& Vlaky::getVlaky()
{
    return vlaky;
}

void Vlaky::vypisZoznamStanic()
{
    std::map<std::string, int> stanicePocetVlakov;

    for (Vlak& vlak : vlaky)
    {
        for (std::string& stanica : vlak.getZastavky())
        {
            stanicePocetVlakov[stanica]++;
        }
    }

    for (const auto& mapStanice : stanicePocetVlakov)
    {
        std::cout << mapStanice.first << " - Pocet vlakov: " << mapStanice.second << std::endl;
    }
}

void Vlaky::vypisPocetStanicPreVlak() {
    int cisloVlaku;
    std::cout << "Zadajte cislo vlaku: ";
    std::cin >> cisloVlaku;

    for (Vlak& vlak : vlaky) {
        if (vlak.getNazovVlaku() == cisloVlaku) {
            std::cout << "Pocet stanic pre vlak " << cisloVlaku << ": " << vlak.getZastavky().size() << std::endl;
            return;
        }
    }

    std::cout << "Vlak s cislom " << cisloVlaku << " nebol najdeny." << std::endl;
}
