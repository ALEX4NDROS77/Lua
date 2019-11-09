#include <stdio.h>

int main(void)
{
    float celsius;
    float farenheit;
    float kelvin;

    for(celsius =-5; celsius <= 40; celsius++)
    {
        farenheit = (celsius * 9 / 5) + 32;
        kelvin = (farenheit - 32) * 5 / 9 + 273.15;
        printf("%.2f Grados Celsius equivalen a %.2f Grados Farenheit\n", celsius, farenheit);
        printf("%.2f Grados Farenheit equivalen a %.2f Grados Kelvin\n", farenheit, kelvin);
    }
    
    return 0;
}
/*
(°F − 32) × 5/9 + 273.15 =  K
*/