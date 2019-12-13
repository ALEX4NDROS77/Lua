// BAJJ --> Eliminar la marca implica tambien finalizar el ejercicio, pero yo lo veo igual que antes.
#include <stdio.h>
#define O 'o','O'
#define NuevaLinea '\n'

int main(void)
{
    char caracter;
    int cantidad = 0;
    // BAJJ --> Los comentarios sobre las constantes simbolicas son los mismo que en el ejercicio anterior
    // Se agrega adicionalmente que las constantes almacenan un texto de sustitucion.
    // El nombre de la constante deberia ser general, es decir que pueda se asignado cualquier valor no solo 'o'

    while((caracter = getchar()) != EOF)
    {
        // BAJJ --> Esta aproximacion es correcta, pero el valor de la constante es erroneo
        if(caracter == O)
        {
            cantidad++;
        }
        // BAJJ --> Cual es el proposito de este bloque?
        if(caracter == NuevaLinea)
        {
            printf("%d",caracter);
        }
        

    }
    
    
    return 0;
}
