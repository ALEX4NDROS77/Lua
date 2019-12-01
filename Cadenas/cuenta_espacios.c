#include <stdio.h>
int main(void)
{
    char caracter;
    int cantidad = 0;

    while((caracter = getchar()) != EOF)
    {
        if (caracter == ' ')
        {
            cantidad++;
        }
        

        if(caracter == '\n')
        {
            printf("%d\n",cantidad);
            cantidad = 0;
        }
        
        

    }
    
    
    return 0;
}