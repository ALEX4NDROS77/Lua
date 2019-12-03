#include <stdio.h>
int main(void)
{
    char caracter;
    int cantidad = 0;

    while((caracter = getchar()) != EOF)
    {
        // BAJJ --> Favor de sustituir por constante simbolica
        // basado en la declaracion de constantes en el archivo cuenta_lineas.c
        if (caracter == ' ')
        {
            cantidad++;
        }
        

        if(caracter == '\n')
        {
            printf("%d\n",cantidad);
            cantidad = 0;
        }
        
        

    }
    
    
    return 0;
}