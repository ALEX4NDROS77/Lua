#include <stdio.h>
int main(void)
{
    char caracter;
    int cantidad = 0;
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
        if(caracter == "exit")
        {
            break;
        }

    }
    
    
    return 0;
}