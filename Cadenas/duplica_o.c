//incompleto
#include <stdio.h>
int main(void)
{
    char caracter;
    int cantidad = 0;
    while((caracter = getchar()) != EOF);
    {
        // BAJJ --> Favor de sustituir por constante simbolica
        // de la forma mostrada en el archivo cuenta_lineas.c
        if(caracter == 'o')
        {
            cantidad++;
        }
        else
        {
        // BAJJ --> Favor de sustituir por constante simbolica
        // de la forma mostrada en el archivo cuenta_lineas.c
           if (caracter == '\n')
           {
             printf("%d\n", cantidad);
           }
           
        }
        
       
    }
    
    
    return 0;
}