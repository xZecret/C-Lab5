#include <stdio.h>

void a()
{
    int a;
    while ((a = getchar()) != 10)
    {
        putchar(a == '?' ? '!' : a);
    }
    putchar('\n');
}

void b()
{
    int a;
    while ((a = getchar()) != 10)
    {
        if (a == '&')
            putchar('&');
        if (a != '-')
            putchar(a);
    }
    putchar('\n');
}

void c()
{
    int a;
    while ((a = getchar()) != 10)
    {
        if ((a >= 'a') && (a <= 'z'))
            putchar(a);
    }
    putchar('\n');
}

void d()
{
    int a;
    while ((a = getchar()) != 10)
    {
        if ((a >= 'A') && (a <= 'Z'))
            putchar(a | 0b00100000);
        else
            putchar(a);
    }
    putchar('\n');
}

void e()
{
    int a;
    while ((a = getchar()) != 10)
    {
        if ((a >= 'a') && (a <= 'z'))
            putchar(a & 0b11011111);
        else
            putchar(a);
    }
    putchar('\n');
}

void f()
{
    int a, b = 0;
    while ((a = getchar()) != 10)
    {
        if (a != '+')
        {
            putchar(a);
            b = 0;
        }
        else
        {
            if (!b)
                putchar(a);
            b++;
        }
    }
    putchar('\n');
}

void g()
{
    int a, b = 0;
    while ((a = getchar()) != 10)
    {
        if (a != '*')
        {
            if (b == 1)
                putchar('*');
            putchar(a);
            b = 0;
        }
        else
        {
            if (b % 2 == 1)
                putchar('+');
            b++;
        }
    }
    putchar('\n');
}

void h()
{
    int a;
    scanf("%d", &a);
    printf("%d", a);
    putchar('\n');
}

void i()
{
    int a, b = 1;
    while ((a = getchar()) != 10)
    {
        if (a == 't' && b == 1)
            b = 2;
        if (a == 'h' && b == 2)
            b = 3;
        if (a == 'e' && b == 3)
            b = 0;
        putchar(a);
        if (b == 0)
        {
            putchar(8);
            putchar(8);
            putchar(8);
            putchar(8);
            putchar(32);
            putchar(32);
            putchar(32);
            putchar(32);
            putchar(8);
            putchar(8);
            putchar(8);
            putchar(8);
            b = 1;
        }
    }
    putchar('\n');
}

void j()
{
    int a, b = '1';
    while ((a = getchar()) != 10)
    {
        if (a >= '0' && a <= '9')
        {
            if (a >= b && a <= '9' || a == '0')
            {
                putchar(a);
                b = a + 1;
            }
        }
        else
        {
            putchar(a);
            b = '1';
        }
    }
    putchar('\n');
}

void k()
{
    int a, b = 1;
    while ((a = getchar()) != 10)
    {
        if (a == 'c' && b == 1)
            b = 2;
        if (a == 'h' && b == 2)
            b = 3;
        if (a == 'i' && b == 3)
            b = 4;
        if (a == 'l' && b == 4)
            b = 5;
        if (a == 'd' && b == 5)
            b = 0;
        putchar(a);
        if (b == 0)
        {
            putchar('r');
            putchar('e');
            putchar('n');
            b = 1;
        }
    }
    putchar('\n');
}

void l()
{
    int a, b = 0;
    while ((a = getchar()) != 10)
    {
        if (a == '{')
            b++;
        if (!b)
            putchar(a);
        if (a == '}')
            b--;
    }
    putchar('\n');
}

int main()
{
    a();
    b();
    c();
    d();
    e();
    f();
    g();
    h();
    i();
    j();
    k();
    l();
}