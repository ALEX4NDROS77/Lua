#include <stdio.h>

int main (void)
{
    int entero = 8;
    float reales = 8.8;
    double presicion = 8.8888;
    char caracter = 'a';

    printf("Valor entero %5d\n",entero);
    printf("Valor Real %.1f\n", reales);
    printf("Valor de Presicion %.4f\n", presicion);
    printf("Valor de Caracter %5c\n", caracter);
    return 0;
}