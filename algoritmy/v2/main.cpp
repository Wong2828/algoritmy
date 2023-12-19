#include <iostream>
#include "OperacieSubor.h"
#include "Vlaky.h"

int main()
{
	Vlaky vlaky;
	OperacieSubor operacieSubor;
	std::string nazov = "Zoznam.txt";
	if (operacieSubor.citajZoSuboru(nazov, vlaky.getVlaky()))
	{
		vlaky.vypisZoznamStanic();
		vlaky.vypisPocetStanicPreVlak();
	}
	
	return 0;
}