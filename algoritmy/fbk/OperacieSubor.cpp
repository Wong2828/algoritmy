#include "OperacieSubor.h"

bool OperacieSubor::nacitajZoSuboru(std::string& nazovSuboru, std::vector<Krajina>& futbaloveKrajiny)
{
    std::ifstream subor(nazovSuboru);

	if (subor.is_open())
	{
		std::string riadok;

		while (std::getline(subor, riadok))
		{
			std::istringstream ss(riadok);
			Krajina krajina;
			std::string nazovKrajiny;

			ss >> nazovKrajiny;

			krajina.setNazov(nazovKrajiny);

			futbaloveKrajiny.push_back(krajina);
		}

		subor.close();
		return true;
	}

	std::cout << "Subor sa nepodarilo otvorit na citanie." << std::endl;
	return false;
}
