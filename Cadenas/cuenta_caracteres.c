#include <stdio.h>
int main(void)
{
    char caracter;
    int cantidad = 0;

    while((caracter = getchar()) != EOF)
    {
        putchar(caracter);

        if(caracter == '\n')
        {
            printf("%d\n",cantidad);
            cantidad = 0;
        }
        else
        {
            cantidad++;
        }
        

    }
    
    
    return 0;
}
/*
- [ ] Basado en el archivo cuenta caracteres, crear un nuevo archivo que cuente unicamente los espacios.
 El nuevo proceso debera imprimir unicamente el numero espacios que conto despues del input del usuario.
- [ ] Crear un proceso que se encargue de leer el input del usuario y por cada caracter *'o', 'O'* debera imprimir uno mas en la salida es decir:
    - **Linea 1:** Amigo imprime Amigo
    - **Linea 2:** Carro imprime Carroo
    - **Linea 3:** Hombro imprime Hooombroooo

> Como nivel de dificultad extra: Si el proceso detecta la palabra exit debera dejar de leer y terminar su ejecucion.
*/