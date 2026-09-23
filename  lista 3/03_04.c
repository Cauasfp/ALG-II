#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho)
{
    int *inicio = vetor;
    int *fim = vetor + tamanho - 1;
    int temp;

    while (inicio < fim)
    {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int *p = vetor;

    inverte_vetor(vetor, 5);

    while (p < vetor + 5)
    {
        printf("%d ", *p);
        p++;
    }

    return 0;
}