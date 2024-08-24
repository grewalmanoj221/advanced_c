#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef int (*foo_sample)(int, int);

int foo(int x, int y)
{
    return x * y;
}

void simple_example()
{

    // int (*f)(int, int) = foo; // Line 16 does same thing
    foo_sample f = foo; // Line 15 also does the same thing

    printf("%d\n", f(3, 4));
}

void print_if(int arr[10], bool (*predicate)(int))
{
    for (int i = 0; i < 10; i++)
    {
        if (predicate(arr[i]))
            printf("%d\n", arr[i]);
    }
}

bool p(int x)
{
    return x % 3 == 0;
}

void another_example()
{

    int arr[10] = {10, 9, 8, 12, 14, 13, 15, 18, 1, 4};
    print_if(arr, p);
}

int compare(const void *x1, const void *x2)
{
    return (*(int *)x1) - (*(int *)x2);
}

void standard_lib_example()
{
    int arr[] = {10, 9, 8, 12, 14, 13, 15, 18, 1, 4};

    int arr_length = sizeof(arr) / sizeof(int);

    for (int i = 0; i < arr_length; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("----------------------------------\n");

    qsort(arr, arr_length, sizeof(int), compare);

    for (int i = 0; i < arr_length; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main(void)
{
    printf("Sample Example\n");
    simple_example();
    printf("Another Example\n");
    another_example();
    printf("Library Example\n");
    standard_lib_example();
}