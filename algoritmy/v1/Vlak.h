#pragma once
#include <string>
#include <vector>
#include "MemLeak.h"

class Vlak
{
private:
	int cisloVlaku;
	std::string nazovStanice;
	int casOdjazduHodina;
	int casOdjazduMinuta;

public:
	void setCisloVlaku(int cislo);
	void setNazovStanice(std::string nazov);
	void setCasOdjazduHodina(int cas);
	void setCasOdjazduMinuta(int cas);

	int getCisloVlaku();
	std::string getNazovStanice();
	int getCasOdjazduHodina();
	int getCasOdjazduMinuta();
};

