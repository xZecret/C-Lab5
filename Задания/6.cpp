#include <stdio.h>

char str[100];
char *ptr;

void main()
{
    gets(str);
    ptr = str;
    while (*ptr) putchar(*ptr++);
    printf("\nlen: %d\n", ptr - str - 1);
}