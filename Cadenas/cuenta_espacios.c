#include <stdio.h>
// BAJJ --> Las constantes simbolicas se declaran despues
// de incluir las cabeceras
    char caracter;
    int cantidad = 0;
    #define ESPACIO ' '
    #define NUEVA_LINEA '\n'

int main(void)
{

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
        // BAJJ --> La variable caracter solo almacena un caracter a la vez, tu tratas de compararlo con multiples caracteres.
        // La solucion seria comparar caracter por caracter la entrada hasta completar la palabra.
        if(caracter == 'e')
        {
            caracter = getchar();
            if(caracter =='x')
            {
                caracter = getchar();
                if(caracter =='i')
                {
                    caracter = getchar();
                    if(caracter =='t')
                    {
                        break;
                    }
                }            
            }
        }

    }
    
    
    return 0;
}