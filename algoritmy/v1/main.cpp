#include <iostream>
#include "NacitajZoSuboru.h"
#include "Vlaky.h"

//bod 5 som si neni isty ze potrebujem zoznam(kazdy vlak bude obsahovat zoznam stanic svojej trasy)
int main()
{
	NacitajZoSuboru nacitaj;

	Vlaky vlaky;
	std::string nazovSuboru = "Zoznam.txt";
	nacitaj.citajZoSuboru(nazovSuboru, vlaky.getVlaky());
	vlaky.zoradStanice();
	vlaky.vypis();
	vlaky.inputVypis();

	return 0;
}