#include <cstdlib>


void generate(int *a)
{
	for (unsigned int i = 0; i < 10; i++){
		a[i] = rand() % 101;
	}
}
