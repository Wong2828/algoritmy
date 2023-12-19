#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include "Vlak.h"
#include "MemLeak.h"

class NacitajZoSuboru
{
public:
	bool citajZoSuboru(std::string& nazovSuboru, std::vector<Vlak>& vlaky);
};

