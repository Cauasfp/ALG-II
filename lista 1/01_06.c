#include <stdio.h>

char media (float nota)
{

    char conceito;

    if (nota >= 0 && nota < 5)
    conceito = 'D';

    if (nota >= 5 && nota < 7)
    conceito = 'C';

    if (nota >= 7 && nota < 9)
    conceito = 'B';

    if (nota >= 9 && nota <=10)
    conceito = 'A';

    if (nota < 0 || nota >10)
   
    printf ("Nota invalida, insira uma media de 0 a 10");


     return conceito;

}


int main ()
{

  float nota;

  printf ("insira a media do aluno:\n ");
  scanf ("%f", &nota);

  char resultado; 
  resultado = media(nota);
printf ("%c\n", resultado);


    return 0;
}