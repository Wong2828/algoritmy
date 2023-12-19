#include "OperacieSubor.h"

bool OperacieSubor::citajZoSuboru(std::string& nazovSuboru, std::vector<Vlak>& vlaky)
{
    std::ifstream subor(nazovSuboru);

    if (subor.is_open()) 
    {
        std::string riadok;
        Vlak vlak;
        bool vlakJeInicializovany = false;

        while (std::getline(subor, riadok)) 
        {
            std::istringstream ss(riadok);
            int nazovVlaku;

            if (ss >> nazovVlaku) 
            {
                if (vlakJeInicializovany) 
                {
                    vlaky.push_back(vlak);
                }
                vlak = Vlak();  //resetne objekt vlak
                vlak.setNazovVlaku(nazovVlaku);
                vlakJeInicializovany = true;
            }
            else if (vlakJeInicializovany)
            {
                ss.clear(); // Clear the failed state of the stringstream
                ss.str(riadok); // Reset the stringstream with the original line
                std::string nazovStanice;
                getline(ss, nazovStanice); // Use getline to read the station name, in case it contains spaces
                vlak.pridajZastavku(nazovStanice);
            }
        }

        // pridaj posledny vlak ak bol inicializovany
        if (vlakJeInicializovany) {
            vlaky.push_back(vlak);
        }

        subor.close();
        return true;
	}
	else
	{
		std::cout << "Nepodarilo sa otvorit subor na citanie" << std::endl;
		return false;
	}
}

