#include <stdio.h>

int main(void)

{
    int i;
    float grados = -5;
    float celsius[46];
    float farenheit[46];
    float kelvin[46];
    int seleccion;

    for(i = 0; i < 46; i++)
    {
        celsius[i] = grados++;
        farenheit[i] = (celsius[i] * 9 / 5) + 32;
        kelvin[i] = celsius[i] + 273.15;
        printf ("%.2f Grados Celsius es igual a %.2f Grados Farenheit\n %.2f Grados Farenheit es igual a %.2f Grados Kelvin\n\n", celsius[i], farenheit[i], farenheit[i], kelvin[i]);
    }

/* Ejercicio scanf*/  
    printf("Ingrese numero de lista: ");
    scanf("%d",&seleccion);
    printf("%d\n",seleccion);
    return 0;
}
/*
(°F − 32) × 5/9 + 273.15 =  K
*/