#include "AkcieKocka.h"

AkcieKocka::AkcieKocka() : vysledokHody{0} {}

std::array<int, 2> AkcieKocka::generujHodKockou()
{
	for (int i = 0; i < 2; i++)
	{
		vysledokHody[i] = std::rand() % 6 + 1;
	}

	return vysledokHody;
}

int AkcieKocka::getSucetHodovKocky()
{
	return vysledokHody[0] + vysledokHody[1];
}

int AkcieKocka::getPrvyHodKockou()
{
	return vysledokHody[0];
}

int AkcieKocka::getDruhyHodKockou()
{
	return vysledokHody[1];
}
