#include <stdio.h>

int integer_add( int x, int y, int z)
{
int sum;
sum = x + y + z;
return sum;
}

int main()
{
    int add;
    add = integer_add(4,5,6);
    printf("%d", add);
}