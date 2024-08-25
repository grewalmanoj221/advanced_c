#include <stdio.h>
#include <stdbool.h>

enum tag
{
    TAG_BOOL,
    TAG_INT,
    TAG_FLOAT
};

struct dynamic
{
    enum tag tag;
    union
    {
        bool b;
        int i;
        float f;
    } value;
};

void simple_example()
{
    struct dynamic ex;

    ex.tag = TAG_INT;
    ex.value.i = 25;

    switch (ex.tag)
    {
    case TAG_BOOL:
    {
        printf("Bool : %d\n", ex.value.b);
        break;
    }

    case TAG_INT:
    {
        printf("Int : %d\n", ex.value.i);
        break;
    }

    case TAG_FLOAT:
    {
        printf("Float : %f\n", ex.value.f);
        break;
    }
    default:
        break;
    }
}

int main(void)
{
    simple_example();
}