#pragma once
#include <vector>

class Hrac
{
private:
	std::vector<int> hrac;
	int body;
public:
	Hrac();
	int getPocetBodov();
	std::vector<int>& getHrac();
	void pridajBod();
};

