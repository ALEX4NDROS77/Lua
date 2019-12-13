#include <stdio.h>
#define ESPACIO ' '
#define NUEVA_LINEA '\n'
    
int main(void)
{
    char caracter;
    int cantidad = 0;
    int flagE[1];
    int flagX[1];
    int flagI[1];
    int flagT[1];
    
    while((caracter = getchar()) != EOF)
    {
        if (caracter == ESPACIO)
        {
            cantidad++;
        }
        

        if(caracter == NUEVA_LINEA)
        {
            printf("%d\n",cantidad);
            cantidad = 0;
        }

        // BAJJ -> La implementacion de esta caracteristica sigue pendiente.
        if(caracter == 'e' )
        {
            flagE[1] = 1;
        }
        else
            flagE[1] = 0;
        
        if(caracter == 'x' && flagE[1] == 1)
            flagX[1] = 1;
        else
        {
            flagE[1] = 0;
            flagX[1] = 0;
        }

        if(caracter == 'i' && flagX[1] == 1)
            flagI[1] = 1;
        else
        {
            flagE[1] = 0;
            flagX[1] = 0;
            flagI[1] = 0;
        }

        if(caracter == 't' && flagI[1] == 1)
           break;

    }
    
    
    return 0;
}
