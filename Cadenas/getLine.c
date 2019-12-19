#include <stdio.h>

#define LINEFEED '\n'
#define VOID_CHAR '\0'
#define MAX_LINE_LENGHT 20

int getLine(char []);

int main(void)
{
    char linea[MAX_LINE_LENGHT];
    int lineLen;

    while((lineLen = getLine(linea)) != EOF)
        printf("La nueva linea es: %s",linea);
    return 0;
}

int getLine(char array[])
{
    int charCount = 0;
    char charInput;

    for(charCount = 0;charCount < (MAX_LINE_LENGHT-1) && ((charInput = getchar()) != EOF) && charInput != LINEFEED;charCount++)
        array[charCount] = charInput;
    if(charInput == LINEFEED)
    {
        array[charCount] = LINEFEED;
        charCount++;
    }
    array[charCount] = VOID_CHAR;
    return charCount;
}