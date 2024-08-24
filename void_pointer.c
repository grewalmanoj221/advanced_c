#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

void simple_example()
{

    int a = 3;
    void *p = &a;
    printf("Pointer Address : %p\n", p);
    printf("Pointer value   : %d\n", *(int *)p);
}

void *my_memset(void *data, uint8_t c, size_t n)
{
    uint8_t *data_as_bytes = (uint8_t *)data;

    for (size_t i = 0; i < n; i++)
    {
        data_as_bytes[i] = c;
    }
}

void second_example()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);

    printf("\n");

    my_memset(arr, 0, sizeof(arr));

    for (int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);
}

void square(void *x)
{
    int *p = x;
    *p = *p * *p;
}

void map(void *arr, size_t n, size_t size, void (*s)(void *))
{

    uint8_t *arr_as_bytes = (uint8_t *)arr; // this is address

    for (size_t i = 0; i < n; i++)
    {
        s(&arr_as_bytes[i * size]); // shifting by size
    }
}

void third_example()
{
    int arr[5] = {1, 4, 3, 5, 2};

    for (int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);

    printf("\n");

    map(arr, sizeof(arr) / sizeof(int), sizeof(int), square); // passing function as pointer

    for (int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);
}

int main(void)
{
    printf("Simple Example\n");
    simple_example();
    printf("Second Example\n");
    second_example();
    printf("Third Example\n");
    third_example();
    return 0;
}