#include <stdlib>


int generate(int &a)
{
   for(unsigned int i=0;i<10;i++)
       a[i] = rand()%101;

   return 0;
}
