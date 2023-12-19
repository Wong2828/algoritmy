#include "Vlaky.h"
#include <set>

bool Vlaky::porovnajPodlaAbecedy(Vlak& a, Vlak& b)
{
    return a.getNazovStanice() < b.getNazovStanice();
}

void Vlaky::zoradStanice()
{
    std::sort(vlaky.begin(), vlaky.end(), porovnajPodlaAbecedy);
}

void Vlaky::vypis()
{
    std::map<std::string, std::vector<int>> staniceAVlaky;

    // Build a map where the key is the station name and the value is a list of train numbers
    for (auto& vlak : vlaky)
    {
        staniceAVlaky[vlak.getNazovStanice()].push_back(vlak.getCisloVlaku());
    }

    // Iterate over the map and print out station names and associated train numbers
    for (auto& stanica : staniceAVlaky)
    {
        std::sort(stanica.second.begin(), stanica.second.end()); // zorad cisla vlakov
        std::cout << stanica.first << ": ";

        for (int i = 0; i < stanica.second.size(); i++)
        {
            std::cout << stanica.second[i];
            if (i < stanica.second.size() - 1)
                std::cout << ",";
        }

        std::cout << std::endl;
    }
}

void Vlaky::inputVypis()
{
    char zaciatocnePismeno;
    std::cout << "Zadajte pismeno:" << std::endl;
    std::cin >> zaciatocnePismeno;

    std::set<std::string> staniceZacinajuceNaPismeno;

    for (auto& vlak : vlaky)
    {
        if (tolower(vlak.getNazovStanice().front()) == tolower(zaciatocnePismeno))
        {
            staniceZacinajuceNaPismeno.insert(vlak.getNazovStanice());
        }
    }

    for (const auto& nazovStanice : staniceZacinajuceNaPismeno)
    {
        std::cout << nazovStanice << std::endl;
    }
}

std::vector<Vlak>& Vlaky::getVlaky()
{
    return vlaky;
}
