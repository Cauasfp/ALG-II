#include <stdio.h>

int main ()

{

    int inteiros[5];
    int *pi;
    int dobro;

    for (int i = 0; i < 5; i++)
    {
       pi = inteiros + i;
       scanf ("%d", pi);

    }

    for (int i = 0; i < 5; i++)

    {
      pi = inteiros + i;
      
      dobro = *pi * 2;
      
      printf ("%d\n", dobro);

    }

   return 0;
}