#include <stdio.h>
char str1[100], str2[100];
char* ptr1, * ptr2;
void main()
{
    ptr1 = str1;
    ptr2 = str2;
    gets(str1);
    gets(str2);
    while (*ptr1)
        putchar(*ptr1++);
    while (*ptr2)
        putchar(*ptr2++);
    putchar('\n');
}