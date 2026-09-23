#include <stdio.h>
#include <time.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

int main()
{
    struct Data data1, data2;
    struct tm t1 = {0};
    struct tm t2 = {0};
    time_t tempo1, tempo2;
    double diferenca;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    t1.tm_mday = data1.dia;
    t1.tm_mon = data1.mes - 1;
    t1.tm_year = data1.ano - 1900;

    t2.tm_mday = data2.dia;
    t2.tm_mon = data2.mes - 1;
    t2.tm_year = data2.ano - 1900;

    tempo1 = mktime(&t1);
    tempo2 = mktime(&t2);

    diferenca = difftime(tempo1, tempo2);

    if (diferenca < 0)
    {
        diferenca = -diferenca;
    }

    printf("Dias decorridos: %.0f\n", diferenca / (60 * 60 * 24));

    return 0;
}