#include <stdio.h>

struct Aluno
{
    int matricula;
    char nome[50];
    float notas[3];
};

int main()
{
    struct Aluno alunos[5];
    float media, maiorMedia = 0;
    int posicao = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        for (int j = 0; j < 3; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }

        media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3;

        if (i == 0 || media > maiorMedia)
        {
            maiorMedia = media;
            posicao = i;
        }
    }

    printf("\nAluno: %s\n", alunos[posicao].nome);
    printf("Notas: %.2f %.2f %.2f\n",
           alunos[posicao].notas[0],
           alunos[posicao].notas[1],
           alunos[posicao].notas[2]);

    return 0;
}