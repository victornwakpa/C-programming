/**
* Write a C function that can perform a multiplication of two integers and return the
calculated result.
*/
#include <stdio.h>

int multiple_value(int x, int y)
{
    int result;
    result = x *y;
    return result;
}

int main()
{
    int multiple;
    multiple = multiple_value(4, 7);
    printf("The multiple of the values is %d \n", multiple);
}