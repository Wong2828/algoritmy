#include <iostream>
#include <ctime>
#include "Hra.h"

int main()
{
	std::srand(std::time(0));
	
	Hra hra;
	hra.hrajKoloHry();
	hra.vypisVysledokHry();
	hra.vypisVysledokHryDoSuboru("Vysledok.txt");
	hra.zadajteCislo();

	return 0;
}

