#include "OperacieSlova.h"

bool OperacieSlova::porovnajSlovaPodlaAbecedy(const std::string& a, const std::string& b)
{
    for (int i = 0; i < std::min(a.size(), b.size()); ++i) {
        if (tolower(a[i]) != tolower(b[i]))
            return tolower(a[i]) > tolower(b[i]);
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

void OperacieSlova::vypisRovnakeSlova()
{
    char zadanePismeno = {};
    while (true) {
        std::cout << "\nZadajte pismeno:" << std::endl;
        std::cin >> zadanePismeno;

        if (std::isalpha(zadanePismeno)) {
            break;
        }
        else 
        {
            std::cout << "Prosím, zadajte písmeno, nie èíslo." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    for (std::string& slovo : zoznamSlov)
    {
        for (char f : slovo)
        {
            if (tolower(f) == tolower(zadanePismeno))
            {
                std::cout << slovo << std::endl;
            }
        }
    }
}
