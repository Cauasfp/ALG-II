#include <stdio.h>

int perfeito(int numero)

{

    
    int soma;
    int i;
    soma = 0;

    for (i = 1; i < numero; i++)

    if (numero % i == 0)
    soma = soma + i;


    if (soma == numero)
     return 1;

     if (soma != numero)
     return 0;
}

 int main ()
 {

   int numero;

   printf ("insira o numero pra saber se ele e perfeito:\n");
   scanf ("%d", &numero);

   int resultado;
   resultado = perfeito(numero);

   printf ("%d", resultado);

 }