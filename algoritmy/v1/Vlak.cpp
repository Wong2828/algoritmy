#include "Vlak.h"

void Vlak::setCisloVlaku(int cislo)
{
	cisloVlaku = cislo;
}

void Vlak::setNazovStanice(std::string nazov)
{
	nazovStanice = nazov;
}

void Vlak::setCasOdjazduHodina(int cas)
{
	casOdjazduHodina = cas;
}

void Vlak::setCasOdjazduMinuta(int cas)
{
	casOdjazduMinuta = cas;
}

int Vlak::getCisloVlaku()
{
	return cisloVlaku;
}

std::string Vlak::getNazovStanice()
{
	return nazovStanice;
}

int Vlak::getCasOdjazduHodina()
{
	return casOdjazduHodina;
}

int Vlak::getCasOdjazduMinuta()
{
	return casOdjazduMinuta;
}

