#include "Hra.h"

void Hra::hrajKoloHry()
{
	for (int i = 0; i < 50; i++)
	{
		hody.ulozHodDoZoznamu(hracA.getHrac());
		std::cout << i+1 << ".\tA: " << hody.getKocka().getPrvyHodKockou() << "+" << hody.getKocka().getDruhyHodKockou() << " = " << hody.getKocka().getSucetHodovKocky() << std::endl;
		sucetA = hody.getKocka().getSucetHodovKocky();

		hody.ulozHodDoZoznamu(hracB.getHrac());
		std::cout << i+1 << ".\tB: " << hody.getKocka().getPrvyHodKockou() << "+" << hody.getKocka().getDruhyHodKockou() << " = " << hody.getKocka().getSucetHodovKocky() << std::endl;
		sucetB = hody.getKocka().getSucetHodovKocky();

		hody.ulozHodDoZoznamu(hracC.getHrac());
		std::cout << i+1 << ".\tC: " << hody.getKocka().getPrvyHodKockou() << "+" << hody.getKocka().getDruhyHodKockou() << " = " << hody.getKocka().getSucetHodovKocky() << std::endl;
		sucetC = hody.getKocka().getSucetHodovKocky();

		vyhodnotKolo();
	}
	
}

void Hra::vyhodnotKolo()
{
	if (sucetA == sucetB && sucetA == sucetC && sucetB == sucetC)
	{
		return;
	}

	if (sucetA > sucetB && sucetA > sucetC)
	{
		hracA.pridajBod();
	}
	else if (sucetB > sucetA && sucetB > sucetC)
	{
		hracB.pridajBod();
	} 
	else
	{
		hracC.pridajBod();
	}
}

void Hra::vypisVysledokHry()
{
	std::cout << "\nVYSLEDOK HRY:" << std::endl;
	std::cout << "A:\t" << hracA.getPocetBodov() << " bodov" << std::endl;
	std::cout << "B:\t" << hracB.getPocetBodov() << " bodov" << std::endl;
	std::cout << "C:\t" << hracC.getPocetBodov() << " bodov" << std::endl;
}

bool Hra::vypisVysledokHryDoSuboru(std::string nazovSuboru)
{
	std::ofstream subor(nazovSuboru);

	if (subor.is_open())
	{
		subor << "VYSLEDOK HRY:" << std::endl;
		subor << "A:\t" << hracA.getPocetBodov() << " bodov" << std::endl;
		subor << "B:\t" << hracB.getPocetBodov() << " bodov" << std::endl;
		subor << "C:\t" << hracC.getPocetBodov() << " bodov" << std::endl;

		subor.close();
		return true;
	}
	else 
	{
		std::cout << "Nepodarilo sa otvorit subor na zapis" << std::endl;
		return false;
	}
}

void Hra::zadajteCislo()		//nedokoncene lebo neukladam si jednotlive cisla len ich sucty do vectoru tak uz sa mi to nechce prerabat
{
	int zadaneCislo = {};
	while (true)
	{
		std::cout << "\nZadajte Cislo od 1 do 6:" << std::endl;
		std::cin >> zadaneCislo;

		if (std::cin.fail())	//predchadza infinite loopu keby uzivatel zada nieco ine(string) nez int
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (zadaneCislo >= 1 && zadaneCislo <= 6)
		{
			break;	
		}
		else 
		{
			std::cout << "Zadali ste cislo v nespravnom rozmedzi" << std::endl;
		}
	}

}
