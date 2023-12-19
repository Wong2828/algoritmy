#include "OperacieSlova.h"

bool OperacieSlova::porovnajSlovaPodlaAbecedy(const std::string& a, const std::string& b)
{
    for (int i = 0; i < std::min(a.size(), b.size()); ++i) {
        if (tolower(a[i]) != tolower(b[i]))
            return tolower(a[i]) < tolower(b[i]);
    }
    return a.size() < b.size();
}

void OperacieSlova::usporiadajKlesajuco()
{
    std::sort(zoznamSlov.begin(), zoznamSlov.end(), porovnajSlovaPodlaAbecedy);
}

std::vector<std::string>& OperacieSlova::getZoznamSlov()
{
    return zoznamSlov;
}

void OperacieSlova::vypisZoznamSlov()
{
    for (std::string& slovo : zoznamSlov)
    {
        std::cout << slovo << std::endl;
    }
}

void OperacieSlova::vypisRovnakoDlheSlova()
{
    int dlzkaSlova = {};
    while (true) {
        std::cout << "\nZadajte cislo dlzky slova:" << std::endl;
        std::cin >> dlzkaSlova;

        if (std::cin.fail())
        {
            std::cout << "Prosim, zadajte cislo, nie charakter." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            break;
        }
    }

    for (std::string& slovo : zoznamSlov)
    {
        if (slovo.size() == dlzkaSlova)
        {
            std::cout << slovo << std::endl;
        }
    }
}