//> El programa debera imprimir los caracteres leidos y en otra linea el numero de caracteres leidos.

#include <stdio.h>

int main(void)
{
    char caracter;
    int cantidad = 0;

    while((caracter = getchar()) != EOF)
    {
        putchar(caracter);

        if(caracter == '\n')
        {
            printf("%d\n",cantidad);
            cantidad = 0;
        }
        else
        {
            cantidad++;
        }
        

    }
    
    
    return 0;
}