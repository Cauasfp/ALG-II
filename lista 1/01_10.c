#include <stdio.h>

float operacao(int num1, int num2)
{
   char conta;
   float resultado;
   printf ("insira a operacao que deseja fazer, +, -, * ou /:\n");
   scanf (" %c", &conta);

   if (conta == '+')
   resultado = num1 + num2;


   if (conta == '-')
   resultado = num1 - num2;

   if (conta == '*')
   resultado = num1 * num2;

   if (conta == '/')
   resultado = (float)num1 / num2;

   return resultado;
}

int main()

{

    int num1;
    int num2;
    float resul;
    printf ("insira o primeiro numero:\n");
    scanf ("%d", &num1);
    
    printf ("insira o segundo numero:\n");
    scanf ("%d", &num2);
    
    resul = operacao(num1, num2);
    printf ("%f", resul);

    return 0;
}
