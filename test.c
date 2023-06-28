#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char, int an dfloat
*/

int main(void)
{
    int n;
    printf("size of n: %lu byte \n", sizeof(n));
    printf("size of int: %lu byte\n", sizeof(int));
    printf("size of char: %lu byte\n", sizeof(char));
    printf("size of float: %lu byte\n", sizeof(float));
    printf("size of double: %lu byte\n", sizeof(double));
}