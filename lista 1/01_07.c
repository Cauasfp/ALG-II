#include <stdio.h>

float media()
{
   int numero;
   int maximo;
   float md;
   float soma;
   soma = 0;
   
   printf ("insira quantos numeros deseja inserir:\n");
   scanf ("%d", &maximo);

   int i;
   
   
   for (i = 0;i < maximo; i++)
   {
   printf ("insira os numeros:\n");
   scanf ("%d", &numero);
   soma = soma + numero;
   }

   md = soma / maximo;
   
   return md;

}


int main ()
{

    int numero;
    float resultado;


    resultado = media();
    printf ("%f", resultado);

    return 0;
}