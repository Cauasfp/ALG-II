#include <stdio.h>

int somatoria()

{
 
  int n;
  int s;
  int i;
  
  printf ("coloque o um numero positivo:\n");
  scanf ("%d", &n);

  for (i = 0; i <= n; i++)
  {
  s = s + i;
  }
 
 return s;

}

int main ()

{

  int resultado;

  resultado = somatoria();
  printf ("%d", resultado);

   return 0;
}