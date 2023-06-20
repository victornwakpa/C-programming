#include <stdio.h>
/**
* main - The main function in this program
* Description: This functions accepts a single value from a user
*/
int main(void)
{
int ch;

printf("Please Enter a value: \n");
ch = getchar();
printf("The value you enter is: %c \n", ch);
return (0);
}
