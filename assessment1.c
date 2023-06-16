/**
* Give two statements, x = 3; and y = 5 +x;, 
* How can you build a statement block with the two statements?
*/
#include <stdio.h>

int main()
{
    int x;
    int y;
    x = 3;
    y = 5 + x;

    printf("The value of y is %d \n", y);
    return (0);
}