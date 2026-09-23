#include <stdio.h>

int *buscar(int *vetor, int tamanho, int x)
{
    int *p = vetor;

    while (p < vetor + tamanho)
    {
        if (*p == x)
        {
            return p;
        }

        p++;
    }

    return NULL;
}

int main()
{
    int vetor[5] = {10, 20, 30, 40, 50};
    int x;
    int *resultado;

    scanf("%d", &x);

    resultado = buscar(vetor, 5, x);

    if (resultado != NULL)
    {
        printf("Encontrado: %d\n", *resultado);
    }
    else
    {
        printf("Nao encontrado\n");
    }

    return 0;
}