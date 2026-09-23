#include <stdio.h>

void horario (int tempo)

{
    int horas;
    int minutos;
    int segundos;
    int resto;
    int resto_min;
    
    horas = tempo / 3600;
    resto = tempo % 3600;
    minutos = resto / 60;
    resto_min = resto % 60;
    segundos = resto_min;   

    printf("o tempo foi de %d horas , %d minutos e %d segundos", horas, minutos, segundos);
    
}

int main ()
{

horario(3752);

return 0;
}