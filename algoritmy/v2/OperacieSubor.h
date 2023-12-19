#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include "Vlak.h"

class OperacieSubor
{
public:
	bool citajZoSuboru(std::string& nazovSuboru, std::vector<Vlak>& vlaky);
};

