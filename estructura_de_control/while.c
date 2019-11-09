#include <stdio.h>

int main(void)
{
    float celsius = -5;
    float farenheit;
    float kelvin;

    while(celsius <= 40)
    {
        farenheit = (celsius * 9 / 5) + 32;
        printf("%.2f Grados Celsius equivalen a %.2f Grados Farenheit\n", celsius, farenheit);
        celsius++;
    }
    
    return 0;
}
/*
(°F − 32) × 5/9 + 273.15 =  K
*/