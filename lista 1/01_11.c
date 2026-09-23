#include <stdio.h>

char *triangulo (int x, int y, int z)
{

    if (x==y && x==z)

    return "triangulo equilatero";

    if (x==y || z==y || x==z)

    return "triangulo isosceles";

    if (x!=y && x!=z && z!=y)

    return "triangulo isosceles";

}


int main ()
{

  int x,y,z;
  char *resultado;
    printf ("insira o tamanho do primeiro lado do triangulo:\n");
    scanf ("%d", &x);
    
    printf ("insira o tamanho do segundo lado do triangulo:\n");
    scanf ("%d", &y);

    printf ("insira o tamanho do terceiro lado do triangulo:\n");
    scanf ("%d", &z);
  
    resultado = triangulo(x,y,z);
    
    printf ("%s\n", resultado);



    return 0;
}