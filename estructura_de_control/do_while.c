#include <stdio.h>

int main(void)
{
    float celsius = -5;
    float farenheit;
    do
    {
        farenheit = (celsius * 9 / 5) + 32;
        printf("%.2f Grados Celsius equivalen a %.2f Grados Farenheit\n", celsius, farenheit);
        celsius++;
    } while (celsius <=40);
    
    return 0;
}
/*
(°F − 32) × 5/9 + 273.15 =  K
*/