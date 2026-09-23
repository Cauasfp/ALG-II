#include <stdio.h>

int *busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s)
{
    int *p = vetor;
    int *q;
    int *inicio;

    while (p <= vetor + tam_v - tam_s)
    {
        inicio = p;
        q = sub;

        while (q < sub + tam_s && *p == *q)
        {
            p++;
            q++;
        }

        if (q == sub + tam_s)
        {
            return inicio;
        }

        p = inicio + 1;
    }

    return NULL;
}

int main()
{
    int vetor[7] = {1, 2, 3, 4, 5, 6, 7};
    int sub[3] = {3, 4, 5};
    int *resultado;

    resultado = busca_subvetor(vetor, 7, sub, 3);

    if (resultado != NULL)
    {
        printf("Subvetor encontrado: %d\n", *resultado);
    }
    else
    {
        printf("Subvetor nao encontrado\n");
    }

    return 0;
}