#include <stdio.h>

int main(void)
{
    int n;
    int *p;

    n = 98;
    p = &n;

    printf("the address of &n: %p \n", &n);
    printf("the address of n: %p \n", n);
    printf("the address of *p: %p \n", *p);
    printf("the address of p: %p \n", p);
    printf("the value of p: %d \n", p);
    printf("the value of n %d \n", n);

    *p = 402;
    printf("the value of n %d \n", n);
}