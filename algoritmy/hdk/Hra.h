#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include "Hody.h"
#include "AkcieKocka.h"

class Hra
{
private:
	Hody hody;
	Hrac hracA;
	Hrac hracB;
	Hrac hracC;
	int sucetA;
	int sucetB;
	int sucetC;
public:
	void hrajKoloHry();
	void vyhodnotKolo();
	void vypisVysledokHry();
	bool vypisVysledokHryDoSuboru(std::string nazovSuboru);
	void zadajteCislo();
};

