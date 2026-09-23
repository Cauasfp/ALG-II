#include <stdio.h>\

int main ()

{
  float matriz[3][3];
  float *pm;

  pm = &matriz[0][0];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
        pm = &matriz[i][j];
        printf ("%p", pm);

    }    

     printf ("\n");

  }

    return 0;
}