#include <iostream>

int printab(int *a,unsigned int n)
{
for(unsigned int i=0;i<n;i++)
   std::cout << a[i] << std::endl;
return 0;
}

int suma(int *a, unsigned int n)
{
 int sum = 0;

 for (unsigned int i=0;i<n;i++)
     sum += a[i];

 return sum;

}
