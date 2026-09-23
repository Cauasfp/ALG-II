#include <stdio.h>

int main ()
{

 int x;
 int y;
 int *px;
 int *py;

 px = &x;
 py = &y;

 if (px > py)

 printf ("%p", &x);

 if (px < py)

 printf ("%p", &y);
    return 0;
}