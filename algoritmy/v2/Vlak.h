#pragma once
#include <vector>
#include <string>

class Vlak
{
private:
	int nazovVlaku;
	std::vector<std::string> zastavky;
public:
	void setNazovVlaku(int nazov);
	int getNazovVlaku();
	void pridajZastavku(std::string zastavka);
	std::vector<std::string>& getZastavky();
};

