#include <stdio.h>
int main(void)
{
    char caracter;
    int cantidad = 0;
    while((caracter = getchar()) !=EOF);
    {
        if(caracter == 'o')
        {
           cantidad++;
        }

         if (caracter == '\n')
         {
             printf("%d\n",cantidad);
         }
                    

    }
    
    
    return 0;
}