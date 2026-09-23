#include <stdio.h>

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media)
{
    int *p = vetor;
    int soma = 0;

    *min = *p;
    *max = *p;

    while (p < vetor + tamanho)
    {
        if (*p < *min)
        {
            *min = *p;
        }

        if (*p > *max)
        {
            *max = *p;
        }

        soma += *p;
        p++;
    }

    *media = (float)soma / tamanho;
}

int main()
{
    int vetor[5] = {10, 20, 5, 40, 15};
    int min, max;
    float media;

    extrair_estatisticas(vetor, 5, &min, &max, &media);

    printf("Minimo: %d\n", min);
    printf("Maximo: %d\n", max);
    printf("Media: %.2f\n", media);

    return 0;
}