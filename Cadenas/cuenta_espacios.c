#include <stdio.h>
#define ESPACIO ' '
#define NUEVA_LINEA '\n'
    
int main(void)
{
    char caracter;
    int cantidad = 0;

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
        // BAJJ --> La aproximacion al problema es mas cercana a la respuesta correcta, sin embargo
        // esta implementacion rompe el flujo del programa debido a que su condicion principal realiza getchar
        // por cada nuevo caracter que encuentra 
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