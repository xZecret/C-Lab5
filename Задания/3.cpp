#include <stdio.h>
char s[] = "Проверка!";
char st[] = "Контрольная строка";
char * ptr_s;
void main()
{
    ptr_s = st;
    puts(s);
    putchar(*(ptr_s + 4));
    putchar(*(ptr_s + 5));
    putchar('\n');
    puts(ptr_s + 23);
}