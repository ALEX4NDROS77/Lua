#include <stdio.h>

#define LINEFEED '\n'
#define VOID_CHAR '\n'
#define MAX_LINE_LENGHT 20

int getLine(char []);

int main(void)
{
    char linea[MAX_LINE_LENGHT];
    int lineLen;

    while((lineLen = getLine(linea)) != EOF)
        printf("La nueva linea es: %s\n",linea);
    return 0;
}

int getLine(char array[])
{
    int charCount = 0;
    char charInput;

    while((charInput = getchar()) != EOF)
    {
        array[charCount] = charInput;
        charCount++;
        if(charCount == MAX_LINE_LENGHT)
        {
            array[MAX_LINE_LENGHT] = VOID_CHAR;
            return MAX_LINE_LENGHT;
        }
        else if(charInput == LINEFEED)
        {
            array[MAX_LINE_LENGHT] = VOID_CHAR;
            return charCount;
        }
    }
    return EOF;
}