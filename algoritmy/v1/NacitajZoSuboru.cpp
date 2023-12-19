#include "NacitajZoSuboru.h"
#include "Vlak.h"

bool NacitajZoSuboru::citajZoSuboru(std::string& nazovSuboru, std::vector<Vlak>& vlaky)
{
	std::ifstream subor(nazovSuboru);

	if (subor.is_open())
	{
		std::string riadok;

		while (std::getline(subor, riadok))
		{
			std::istringstream ss(riadok);
			Vlak vlak;
			int cisloVlaku, casOdjazduHodina, casOdjazduMinuta;
			std::string nazovStanice;
			char dvojbodka;

			ss >> cisloVlaku >> nazovStanice >> casOdjazduHodina >> dvojbodka >> casOdjazduMinuta;

			vlak.setCisloVlaku(cisloVlaku);
			vlak.setNazovStanice(nazovStanice);
			vlak.setCasOdjazduHodina(casOdjazduHodina);
			vlak.setCasOdjazduMinuta(casOdjazduMinuta);

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