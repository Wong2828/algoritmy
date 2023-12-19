#pragma once
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <iostream>
#include <algorithm>
#include "Krajina.h"

class Zapasy
{
private:
	std::vector<Krajina> futbaloveKrajiny;
	std::vector<std::string> vysledkyZapasov;
	std::map<std::string, int> tabulkaBodov;


public:
	void odohrajZapasy();
	void vyhodnotZapasy();
	std::vector<Krajina>& getFutbaloveKrajiny();
	std::vector<std::string>& getVysledkyZapasov();
	std::vector<std::pair<std::string, int>> zoradenyVec();
	void vypis();
	void nacitajCisloVypis();
};

