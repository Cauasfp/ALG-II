#include <stdio.h>

int verificar(char *str1, char *str2)
{
 char *p1, *p2;

while (*str1 != '\0')
  {
     p1 = str1;
     p2 = str2;

     while (*p1 == *p2 && *p2 != '\0')
     {
       p1++;
       p2++;
     }
  
     if (*p2 == '\0')
       {
        return 1;
       }
  
 
    str1++;
  }
 
  return 0;
}

int main ()
{
 char str1[100], str2[100];


printf("Digite a primeira string: ");
  scanf(" %[^\n]", str1);

  printf("Digite a segunda string: ");
  scanf(" %[^\n]", str2);

    if (verificar(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string nao ocorre dentro da primeira.\n");
    }

    return 0;
}







}
