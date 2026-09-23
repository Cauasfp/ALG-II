#include <stdio.h>

#define PI 3.14159

void calcular_esfera(float raio, float *area, float *volume)
{
    *area = 4 * PI * raio * raio;
    *volume = (4.0 / 3.0) * PI * raio * raio * raio;
}

int main ()
{
  float raio, area, volume;

  scanf ("%f", &raio);

  calcular_esfera(raio, &area, &volume);

  printf ("area: %.2f\n", area);
  printf ("volume: %.2f\n", volume);
  
    return 0;
}