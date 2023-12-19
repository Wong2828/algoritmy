#include "OperacieSubor.h"

bool OperacieSubor::citajZoSuboru(std::string& nazovSuboru, std::vector<std::string>& slova)
{
	std::ifstream subor(nazovSuboru);

	if (subor.is_open())
	{
		std::string slovo;

		while (std::getline(subor, slovo))
		{
			slova.push_back(slovo);
		}

		subor.close();
		return true;
	}

	std::cout << "Nepodarilo sa otvorit subor na citanie" << std::endl;
	return false;
}
