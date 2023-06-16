/**
* A C program that calculate an addition and print out the result
*/
#include <stdio.h>

int integer_add(int x, int y)
{
    int result;
    result = x + y;
    return result;
}

int main(void)
{
    int sum;
    sum = integer_add(5, 4);
    printf("The sum is %d \n", sum);
}
