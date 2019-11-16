/**************************************************************
 * @author Francisco Bautista (BAJJ)
 * @email jbautista@externos.santander.com.mx
 * @create date 2019-11-09 15:36:44
 * @modify date 2019-11-09 15:36:44
 * @desc Demostracion sobre funciones para manejo de caracteres
 *       en los archivos de entrada y salida estandar.
 **************************************************************/
#include <stdio.h>

/***************************************************************************
 * @brief Funcion princial que demuestra el funcionamiento basico
 *        de las funciones para manejo de caracteres de la 
 *        biblioteca estandar.
 *        getchar: lee un caracter del archivo de entrada estandar.
 *        putchar: escribe un caracter dado, al archivo de salida estandar.
 * @return int 
 *****************************************************************************/
int main(void) 
{
    char caracter;

    // EOF: Constante que indica que se llego al final del archivo
    //      Y por tanto ya no es posible seguir leyendo
    printf("Ingrese lineas de texto a la entrada\n");
    printf("Para observar demostracion de funciones\n");
    printf("Para detener la ejecucion del programa presione Ctrl+c\n");
    while((caracter = getchar()) != EOF)
        putchar(caracter)
    return 0;
}