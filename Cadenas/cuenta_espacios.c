#include <stdio.h>
// BAJJ --> Las constantes simbolicas se declaran despues
// de incluir las cabeceras
    #define ESPACIO ' '
    #define NUEVA_LINEA '\n'

    // Estas variables deberian estar declaradas dentro del bloque Main, no fuera de el.
    // Esto que acabas de realizar se trata de variables globales al programa, trataremos el tema mas tarde
    char caracter;
    int cantidad = 0;
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
        // BAJJ --> La aproximacion al problema es mas cercana a la respuesta correcta, sin embargo
        // esta implementacion rompe el flujo del programa debido a que su condicion principal realiza getchar
        // por cada nuevo caracter que encuentra 
        if(caracter == 'e')
        {
            // BAJJ --> aunque estas cerca tendras que pensar en una mejor manera de resolver el problema.
            // esfuerzate ;)
            caracter = getchar();
            if(caracter =='x')
            {
                // BAJJ --> Por ultimo, haz favor de probar tus modificaciones posterior a que las hagas, este programa no funciona
                // en su estado actual
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