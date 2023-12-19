#pragma once
#include <array>

class AkcieKocka
{
private:
	std::array<int, 2> vysledokHody;
public:
	AkcieKocka();
	std::array<int, 2> generujHodKockou();
	int getSucetHodovKocky();
	int getPrvyHodKockou();
	int getDruhyHodKockou();
};

