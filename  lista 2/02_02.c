#include <stdio.h>

int main()

{

   int x;
   int y;
   int *px;
   int *py;

   px = &x;
   py = &y;

   printf ("digite um digito para comparar endereco:\n");
   scanf ("%d",&x);

   printf ("digite um segundo digito:\n");
   scanf ("%d",&y);
   
   if (px > py)
   printf ("%d",*px);

   if (py > px)
   printf ("%d",*py);

    return 0;
}