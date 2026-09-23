#include <stdio.h>

void imprimir (int *vetor, int tamanho)
{

   int *fim = vetor + tamanho;

   while (vetor < fim)
   {
    printf ("%d ", *vetor);
    vetor++;
   }

}

int main ()
{
    int vetor[5] = {10,20,30,40,50};

    imprimir (vetor, 5);

    return 0;
}