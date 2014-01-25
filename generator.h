#include <cstdlib>


void generate(int *a)
{
<<<<<<< HEAD
	for (unsigned int i = 0; i < 10; i++){
		a[i] = rand() % 101;
	}
=======
   for(unsigned int i=0;i<10;i++)
       a[i] = rand()%101;

   return 0;
>>>>>>> 04468b53f9bbfdbe8fb0d68d21f97583db721ff7
}
