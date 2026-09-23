#include <stdio.h>
#include <math.h>

struct Ponto
{
    float x;
    float y;
};

struct Retangulo
{
    struct Ponto superiorEsquerdo;
    struct Ponto inferiorDireito;
};

int main()
{
    struct Retangulo retangulo;
    float largura, altura, area, perimetro, diagonal;

    printf("X superior esquerdo: ");
    scanf("%f", &retangulo.superiorEsquerdo.x);

    printf("Y superior esquerdo: ");
    scanf("%f", &retangulo.superiorEsquerdo.y);

    printf("X inferior direito: ");
    scanf("%f", &retangulo.inferiorDireito.x);

    printf("Y inferior direito: ");
    scanf("%f", &retangulo.inferiorDireito.y);

    largura = fabs(retangulo.inferiorDireito.x - retangulo.superiorEsquerdo.x);
    altura = fabs(retangulo.superiorEsquerdo.y - retangulo.inferiorDireito.y);

    area = largura * altura;
    perimetro = 2 * (largura + altura);
    diagonal = sqrt(largura * largura + altura * altura);

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}