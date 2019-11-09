#include <stdio.h>

int main(void)
{
    int i;
    float grados = -5;
    float celsius[46];
    float farenheit[46];

    for(i = 0; i < 46; i++)
    {
        celsius[i] = grados++;
        farenheit[i] = (celsius[i] * 9 / 5) + 32;
        printf ("%.2f Grados Celsius es igual a %.2f Grados Farenheit\n", celsius[i], farenheit[i]);        
    }   
    
    return 0;
}
/*
*¿Cómo obtener input del usuario en lenguaje C usando ScanF?
*Tabla converción a Kelvin de Farenheit
*/
