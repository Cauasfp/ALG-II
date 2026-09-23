#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenar(int *vetor, int tamanho)
{
    int *p;
    int *fim = vetor + tamanho - 1;

    while (fim > vetor)
    {
        p = vetor;

        while (p < fim)
        {
            if (*p > *(p + 1))
            {
                swap(p, p + 1);
            }

            p++;
        }

        fim--;
    }
}

int main()
{
    int vetor[5] = {5, 2, 8, 1, 3};
    int *p = vetor;

    ordenar(vetor, 5);

    while (p < vetor + 5)
    {
        printf("%d ", *p);
        p++;
    }

    return 0;
}