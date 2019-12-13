#include <stdio.h>
#define CARACTER_O 'o'
#define NUEVA_LINEA '\n'

int main(void)
{
    char caracter;
    int cantidad = 0;
    int cantidad_escrita = 1;

    while((caracter = getchar()) != EOF)
    {
        putchar(caracter);

        if(caracter == CARACTER_O)
        {
            cantidad++;
        }

        if(caracter == CARACTER_O)
        {
           while(cantidad_escrita < cantidad)
           {
               putchar(CARACTER_O);
               cantidad_escrita++;
           }
            cantidad_escrita = 1;
        }
    }
    
    
    return 0;
}
