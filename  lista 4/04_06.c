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
    int maisAlto = 0;
    int maisVelho = 0;

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

    for (int i = 1; i < 5; i++)
    {
        if (atletas[i].altura > atletas[maisAlto].altura)
        {
            maisAlto = i;
        }

        if (atletas[i].idade > atletas[maisVelho].idade)
        {
            maisVelho = i;
        }
    }

    printf("Atleta mais alto: %s\n", atletas[maisAlto].nome);
    printf("Atleta mais velho: %s\n", atletas[maisVelho].nome);

    return 0;
}