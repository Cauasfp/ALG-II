#include <stdio.h>

int tabuada(int n, int m)

{

    int i;
    int mult;

    for (i = 1; i <=n; i++)
    {
       mult = i * m;
       
       printf ("%d x %d = %d\n", i, m, mult);

    }

    return mult;
}


int main ()
{

    int n;
    int m;

    printf ("insira que numero vc deseja receber a tabuada:\n");
    scanf ("%d", &m);

    printf ("insira ate que numero vc deseja fazer a multiplicacao:\n");
    scanf ("%d", &n);

    int resultado;
    resultado = tabuada(n,m);
    

    return 0;
}