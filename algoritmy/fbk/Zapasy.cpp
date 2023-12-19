#include "Zapasy.h"

void Zapasy::odohrajZapasy()
{
    for (int i = 0; i < futbaloveKrajiny.size(); i++)
    {
        for (int j = i + 1; j < futbaloveKrajiny.size(); j++)
        {
            int skore1 = std::rand() % 6 + 1;
            int skore2 = std::rand() % 6 + 1;

            std::string vyslednyZapas = futbaloveKrajiny[i].getNazov() + ":" + futbaloveKrajiny[j].getNazov() + " " + std::to_string(skore1) + ":" + std::to_string(skore2);

            vysledkyZapasov.push_back(vyslednyZapas);
        }
    }

    for (int i = 0; i < vysledkyZapasov.size(); i++)
    {
        std::cout << vysledkyZapasov[i] << std::endl;
    }
}

void Zapasy::vyhodnotZapasy()
{
    for (const std::string& zapas : vysledkyZapasov)
    {
        std::istringstream ss(zapas);
        std::string krajina1, krajina2, preskoc;
        int skore1, skore2;

        std::getline(ss, krajina1, ':');
        //std::getline(ss, preskoc, ' '); // preskocenie medzery
        std::getline(ss, krajina2, ' ');
        ss >> skore1;
        std::getline(ss, preskoc, ':'); // preskocenie dvojbodky
        ss >> skore2;

        if (skore1 > skore2)
        {
            tabulkaBodov[krajina1] += 3;
        }
        else if (skore1 < skore2)
        {
            tabulkaBodov[krajina2] += 3;
        }
        else
        {
            tabulkaBodov[krajina1] += 1;
            tabulkaBodov[krajina2] += 1;
        }
    }
}

std::vector<std::pair<std::string, int>> Zapasy::zoradenyVec()
{
    std::vector<std::pair<std::string, int>> vec(tabulkaBodov.begin(), tabulkaBodov.end());

    std::sort(vec.begin(), vec.end(), [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
        return a.second > b.second;
        });

    return vec;
}

void Zapasy::vypis()
{
    std::cout << std::endl;
    int index = 1;
    for (const auto& p : zoradenyVec())
    {
        std::cout << index << ". " << p.first << " " << p.second << std::endl;
        index++;
    }
}

void Zapasy::nacitajCisloVypis()
{
    std::vector<std::pair<std::string, int>> zoradeneKrajiny = zoradenyVec();

    int cislo = {};
    std::cout << std::endl;
    std::cout << "Zadajte poradove cislo zeme (1-32): ";
    std::cin >> cislo;

    if (cislo < 1 || cislo > 32 || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Neplatne cislo. Musi byt v rozmedzi 1 az 32" << std::endl;
    }
    else {
        if (cislo <= zoradeneKrajiny.size()) {
            auto& f = zoradeneKrajiny[cislo - 1]; // index od nuly
            std::cout << "Krajina na " << cislo << ". mieste je " << f.first << " s poctom bodov " << f.second << std::endl;
        }
        else {
            std::cout << "Na tomto umietneni nieje ziadna krajina" << std::endl;
        }
    }

}

std::vector<Krajina>& Zapasy::getFutbaloveKrajiny()
{
    return futbaloveKrajiny;
}

std::vector<std::string>& Zapasy::getVysledkyZapasov()
{
    return vysledkyZapasov;
}


