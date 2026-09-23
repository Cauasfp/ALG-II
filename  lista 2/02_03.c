#include <stdio.h>

int main ()

{
   float numeros[10];
   float *pn;

   pn = &numeros[10];

   for (int i = 0; i < 10; i++)
   {
      pn = &numeros[i];
      printf ("%p\n", pn);

   }

    return 0;
}