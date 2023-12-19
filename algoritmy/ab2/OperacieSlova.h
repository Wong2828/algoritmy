#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include "MemLeak.h"

class OperacieSlova
{
private:
	std::vector<std::string> zoznamSlov;

public:
	static bool porovnajSlovaPodlaAbecedy(const std::string& a, const std::string& b);
	void usporiadajKlesajuco();
	std::vector<std::string>& getZoznamSlov();
	void vypisZoznamSlov();
	void vypisRovnakoDlheSlova();
};
