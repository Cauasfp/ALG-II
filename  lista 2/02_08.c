#include <stdio.h>

void preencher(int *vetor, int tamanho, int valor)
{
    int *fim = vetor + tamanho;

    while (vetor < fim)
    {
        *vetor = valor;
        vetor++;
    }
}

int main()
{
    int vetor[5];

    preencher(vetor, 5, 10);

    int *p = vetor;

    while (p < vetor + 5)
    {
      printf ("%d ", *p);
      p++;

    }
  return 0;
  }