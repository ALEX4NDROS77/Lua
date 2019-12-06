#include <stdio.h>
// BAJJ --> Las constantes simbolicas se declaran despues
// de incluir las cabeceras

int main(void)
{
    char caracter;
    int cantidad = 0;
    // BAJJ --> Los nombres de las constantes simbolicas se escrbien siempre en Mayuscula,
    // las palabras se separan con '_'
    #define Espacio ' '
    #define NuevaLinea '\n'

    while((caracter = getchar()) != EOF)
    {
        if (caracter == Espacio)
        {
            cantidad++;
        }
        

        if(caracter == NuevaLinea)
        {
            printf("%d\n",cantidad);
            cantidad = 0;
        }
        //Trabajando en correcion de warning: "comparison between pointer and integer".
        // BAJJ --> La variable caracter solo almacena un caracter a la vez, tu tratas de compararlo con multiples caracteres.
        // La solucion seria comparar caracter por caracter la entrada hasta completar la palabra.
        if(caracter == "exit")
        {
            break;
        }

    }
    
    
    return 0;
}