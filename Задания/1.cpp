#include <stdio.h>
char string[100];
void main()
{
    puts("Введите строку текста:\n");
    gets(string);
    puts("\nБыла введена строка:");
    puts(string);
}