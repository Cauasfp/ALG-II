#include <stdio.h>

int idade (int anos, int meses, int dias)
{
   
  int anos_dias;
  int meses_dias;
  int idade_total;

  anos_dias = anos * 365;
  meses_dias = meses * 30;
  idade_total = anos_dias + meses_dias + dias;

  return idade_total;

}

int main ()

{

  int anos;
  int meses;
  int dias;

  printf ("insira quantos anos essa pessoa tem:\n");
  scanf("%d", &anos);

  printf ("insira quantos meses essa pessoa tem:\n");
  scanf ("%d", &meses);

  printf ("insira quantos dias essa pessoa tem :\n");
  scanf ("%d", &dias);

  int resultado;
  resultado = idade(anos,meses,dias);

  printf ("%d", resultado);

    return 0;
}