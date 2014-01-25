#include <iostream>
#include "generator.h"
#include "min.h"
#include "max.h"

int main()
{
	int* tab = new int[10];
	generate(tab);
	std::cout << "Minimalna wartosc: " << min(tab, 10) << std::endl;
	std::cout << "Maksymalna wartosc: " << max(tab, 10) << std::endl;
	
	int a;
	std::cin >> a;
	delete[] tab;
	return 0;
}