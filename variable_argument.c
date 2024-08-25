#include <stdio.h>
#include <stdarg.h>

void pretty_simple_example()
{

    int a = 30;
    char s = 's';
    char arr[] = "I am there";

    printf("%d %c %s\n", a, s, arr);
    // can take variable/any number of argument to print
}

int sum_of_all(int count, ...)
{
    va_list ap;
    va_start(ap, count);

    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        int x = va_arg(ap, int);
        sum += x;
    }
    va_end(ap);

    return sum;
}

void simple_sum_example()
{
    printf("%d\n", sum_of_all(4, 1, 2, 3, 4));
}

int main(void)
{
    pretty_simple_example();

    simple_sum_example();

    return 0;
}