#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Krajina.h"

class OperacieSubor
{
public:
	bool nacitajZoSuboru(std::string& nazovSuboru, std::vector<Krajina>& futbaloveKrajiny);
};

