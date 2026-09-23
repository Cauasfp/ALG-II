#include <stdio.h>

struct Hora
{
    int hora;
    int minuto;
    int segundo;
};

int main()
{
    struct Hora vetor[5];
    int maior = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Hora: ");
        scanf("%d", &vetor[i].hora);

        printf("Minuto: ");
        scanf("%d", &vetor[i].minuto);

        printf("Segundo: ");
        scanf("%d", &vetor[i].segundo);
    }

    for (int i = 1; i < 5; i++)
    {
        if (vetor[i].hora > vetor[maior].hora ||
            (vetor[i].hora == vetor[maior].hora && vetor[i].minuto > vetor[maior].minuto) ||
            (vetor[i].hora == vetor[maior].hora && vetor[i].minuto == vetor[maior].minuto && vetor[i].segundo > vetor[maior].segundo))
        {
            maior = i;
        }
    }

    printf("Maior hora: %02d:%02d:%02d\n",
           vetor[maior].hora,
           vetor[maior].minuto,
           vetor[maior].segundo);

    return 0;
}