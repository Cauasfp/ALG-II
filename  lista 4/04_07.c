#include <stdio.h>

struct Atleta
{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};

int main()
{
    struct Atleta atletas[5];
    struct Atleta temp;

    for (int i = 0; i < 5; i++)
    {
        printf("Nome: ");
        scanf(" %[^\n]", atletas[i].nome);

        printf("Esporte: ");
        scanf(" %[^\n]", atletas[i].esporte);

        printf("Idade: ");
        scanf("%d", &atletas[i].idade);

        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (atletas[i].idade < atletas[j].idade)
            {
                temp = atletas[i];
                atletas[i] = atletas[j];
                atletas[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s - %d anos - %s - %.2f m\n",
               atletas[i].nome,
               atletas[i].idade,
               atletas[i].esporte,
               atletas[i].altura);
    }

    return 0;
}