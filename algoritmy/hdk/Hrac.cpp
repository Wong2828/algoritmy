#include "Hrac.h"

Hrac::Hrac() : body{0} {};

int Hrac::getPocetBodov()
{
	return body;
}

std::vector<int>& Hrac::getHrac()
{
	return hrac;
}

void Hrac::pridajBod()
{
	body += 1;
}
