/*****************************************************
 * @author Francisco Bautista (BAJJ)
 * @email jbautista@externos.santander.com.mx
 * @create date 2019-11-21 09:36:52
 * @modify date 2019-11-21 09:36:52
 * @desc Cuenta las lineas de la entrada 
 *****************************************************/
#include <stdio.h>

// Definicion de una constante simbolica
// El nombre de la constante sera reemplazado
// por el texto de la derecha
#define NUEVA_LINEA '\n'

int main(void)
{
    int cuenta = 0;
    char caracter;

    while((caracter = getchar()) != EOF)
    {
        if(caracter == NUEVA_LINEA)
        {
            cuenta++;
            printf("El conteo de lineas es [%d]\n",cuenta);
        }
    }
    return 0;
}