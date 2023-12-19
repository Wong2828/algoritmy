#pragma once
#include <map>
#include "Vlak.h"
#include "OperacieSubor.h"

class Vlaky
{
private:
	std::vector<Vlak> vlaky;
public:
	std::vector<Vlak>& getVlaky();
	void vypisZoznamStanic();
	void vypisPocetStanicPreVlak();
};

