#include <stdio.h>

int main()
{
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *ptr = &matriz[0][0];
    int soma = 0;

    soma += *ptr;
    ptr += 4;

    soma += *ptr;
    ptr += 4;

    soma += *ptr;

    printf("Soma: %d\n", soma);

    return 0;
}