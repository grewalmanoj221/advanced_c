#include <stdio.h>

struct bit_struct
{
    // only hold specified amount of bits
    int first_4 : 4;
    int next_4 : 4;
    int alone : 1;
    int rest : 7;
};

struct struct_normal
{

    int first_4;
    int next_4;
    int alone;
    int rest;
};
void simple_example()
{
    struct bit_struct str_bit;
    struct struct_normal str_normal;

    printf("Size of Normal strcut : %zu\n", sizeof(str_normal));
    printf("Size of Byte strcut : %zu\n", sizeof(str_bit));

    str_bit.first_4 = -8;
    str_bit.next_4 = 7;
    str_bit.alone = 1;
    str_bit.rest = 63;

    printf("first_4 : %d\n", str_bit.first_4);
    printf("next_4 : %d\n", str_bit.next_4);
    printf("alone : %d\n", str_bit.alone);
    printf("rest : %d\n", str_bit.rest);

    str_bit.next_4 = 90; // will give overflow warning
    str_bit.rest = 127;
    printf("Updated next_4 : %d\n", str_bit.next_4);
    printf("Updated rest : %d\n", str_bit.rest);
}

int main(void)
{
    simple_example();
}