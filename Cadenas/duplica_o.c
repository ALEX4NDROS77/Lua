// BAJJ --> En espera de la elminiacion del tag incompleto, para envio de comentarios
//incompleto
#include <stdio.h>
int main(void)
{
    char caracter;
    int cantidad = 0;
    #define O 'o','O'
    #define NuevaLinea '\n'

    while((caracter = getchar()) != EOF)
    {

        if(caracter == O)
        {
            cantidad++;
        }
        if(caracter == NuevaLinea)
        {
            //Trabajando para convertir el numero de 'o' contadas en 'o' replicadas.
            printf("%d",caracter);
        }
        

    }
    
    
    return 0;
}
