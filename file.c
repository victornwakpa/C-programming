#include <stdio.h>

int main() {
    char firstChar = 'A';
    char secondChar = 'a';

    /* In line 12 and 13 the value assigned is the ASCII value reprsenting 
    * A and a respectively
    * Line 19 and 20 prints the statement. The %c character specifier is used to 
    * print the charater of a variable.
    */

    char c1;
    char c2;

    c1 = 65;
    c2 = 97;

    printf("The value of firstChar is %c \n", firstChar);
    printf("The value of secondChar is %c \n\n", secondChar);

    printf("The ASCII value of 65 is %c \n", c1);
    printf("The ASCII vslue of 97 is %c \n", c2);
}