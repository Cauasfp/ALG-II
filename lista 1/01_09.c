#include <stdio.h>

float funcao (int n)
{

   float s;
   int i;
   int fatorial;

   fatorial = 1;
   s = 1;

   for (i = 1; i <= n; i++)
   {
      
      fatorial = fatorial * i;
      s = s  + 1.0 / fatorial;

   }
  
  return s;
}


int main ()
{

    int n;

    printf ("digite um numero inteiro positivo:\n");
    scanf ("%d", &n);

    float resultado;
    
    resultado = funcao(n);
    
    printf ("%f", resultado);

    return 0;
}