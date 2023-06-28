#include <stdio.h>

/**
 * Descriptionn: How rto view the address your data is stored in
*/

int main(void)
{
    char c;
    int n;

    printf("Address of variable c: %p \n", &c);
    printf("Address of variable n: %p \n", &n);
}