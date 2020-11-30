#include <stdio.h>

void a()
{
    int a, b = 0;
    while ((a = getchar()) != 10)
    {
        if (a < '0' || a > '9')
            b = 0;
        if (a == '.')
            b = 1;
        if (a >= '0' && a <= '9' && b > 0)
            if (b++ > 2)
                continue;
        putchar(a);
    }
    putchar('\n');
}

void b()
{
    int a, b = 1;
    while ((a = getchar()) != 10)
    {
        if (a == '.')
            b = 0;
        else if (a != '0')
            b++;
        if (a == '0' && b > 0)
            continue;
        putchar(a);
    }
    putchar('\n');
}

void main()
{
    a();
    b();
}