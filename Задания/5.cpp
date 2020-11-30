#include <stdio.h>
#include <stdbool.h>
char str1[100], str2[100];
char *ptr1, *ptr2;
bool equals = false;

void main()
{
    ptr1 = str1;
    ptr2 = str2;
    gets(str1);
    gets(str2);
    while (*ptr1)
    {
        while (*ptr2)
        {
            if (*ptr1 == *ptr2)
                equals = true;
            ptr2++;
        }
        if (!equals)
            putchar(*ptr1);
        equals = false;
        ptr1++;
        ptr2 = str2;
    }
    putchar('\n');
}