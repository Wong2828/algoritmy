#pragma once
#include <vector>
#include "AkcieKocka.h"
#include "Hrac.h"

class Hody
{
private:
	AkcieKocka kocka;
public:
	void ulozHodDoZoznamu(std::vector<int>& hrac);
	AkcieKocka getKocka();
};

