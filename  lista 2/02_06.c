#include <stdio.h>

int main()

{
  int inteiros[5];
  int *pi;
  int resto;

  for (int i = 0; i < 5; i++)
  {
    pi = inteiros + i;
    printf ("insira os numeros:\n");
    scanf ("%d", pi);
  }

  for (int i = 0; i < 5; i++)
  {
    pi = inteiros + i;
    resto = *pi % 2;
    if (resto == 0)
    {
      printf ("%p\n", pi);
    }
  }

  return 0;
}