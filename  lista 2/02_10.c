#include <stdio.h>

int main ()
{
    int a,*b,**c,***d;

    scanf ("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf ("%d\n", (*b) * 2);
    printf ("%d\n", (**c) * 3);
    printf ("%d\n", (***d) * 4);
    
    return 0;
}