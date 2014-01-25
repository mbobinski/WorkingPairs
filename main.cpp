#include <iostream>
#include "generator.h"
#include "min.h"
#include "max.h"
#include "utils.h"

int main()
{
	int* tab = new int[10];
	generate(tab);
	printab(tab, 10);
	std::cout << "Minimalna wartosc: " << min(tab, 10) << std::endl;
	std::cout << "Maksymalna wartosc: " << max(tab, 10) << std::endl;
	std::cout << "Suma: " << suma(tab, 10);
	
	int a;
	std::cin >> a;
	delete[] tab;
	return 0;
}