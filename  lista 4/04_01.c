#include <stdio.h>

struct Pessoa
{
    char nome[50];
    int idade;
    char endereco[100];
};

int main()
{
    struct Pessoa pessoa;

    printf("Nome: ");
    scanf(" %[^\n]", pessoa.nome);

    printf("Idade: ");
    scanf("%d", &pessoa.idade);

    printf("Endereco: ");
    scanf(" %[^\n]", pessoa.endereco);

    printf("\nNome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);

    return 0;
}