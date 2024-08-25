#include <stdio.h>

enum foo
{
    foo_2 = 0,
    foo_3,
    foo_4,
};

static int squares[] = {4, 9, 16};

void simple_example()
{
    printf("%d\n", squares[foo_2]);
    printf("%d\n", squares[foo_3]);
    printf("%d\n", squares[foo_4]);
}

// can assign index to specified value
static int map_squares[] = {
    [foo_2] = 4,
    [foo_4] = 9,
    [foo_3] = 16};

void hash_map_example()
{

    printf("%d\n", map_squares[foo_2]);
    printf("%d\n", map_squares[foo_3]);
    printf("%d\n", map_squares[foo_4]);
}

// rest index initalized with zero
static int char_map_squares[] = {
    ['a'] = 4,
    ['c'] = 9,
    ['b'] = 16};

void char_hash_map_example()
{

    printf("%d\n", char_map_squares[foo_2]);
    printf("%d\n", char_map_squares[foo_3]);
    printf("%d\n", char_map_squares[foo_4]);
    printf("%d\n", char_map_squares['a']);
    printf("%d\n", char_map_squares['b']);
    printf("%d\n", char_map_squares['c']);
}

int main(void)
{
    printf("Simple Example\n");
    simple_example();
    printf("Simple Example for designated initializers \n");
    hash_map_example();
    printf("Character Example for designated initializers \n");
    char_hash_map_example();

    return 0;
}