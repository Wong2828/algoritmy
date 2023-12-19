#include "Hody.h"

void Hody::ulozHodDoZoznamu(std::vector<int>& hrac)
{
	kocka.generujHodKockou();
	int koloHodu = kocka.getSucetHodovKocky();
	hrac.push_back(koloHodu);
}

AkcieKocka Hody::getKocka()
{
	return kocka;
}
