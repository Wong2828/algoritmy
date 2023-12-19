#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include "Vlak.h"
#include "MemLeak.h"

class Vlaky
{
private:
	std::vector<Vlak> vlaky;
public:
	static bool porovnajPodlaAbecedy(Vlak& a, Vlak& b);
	void zoradStanice();
	void vypis();
	void inputVypis();
	std::vector<Vlak>& getVlaky();
};

