#include <stdio.h>

int main() {
    // Escape sequence = character combination consisting of a backslash
    // followed by a letter or combination of digits.
    // They specify actions within a line or string of text.
    // \n = newline
    // \t = tab

    printf("Hello World\nVictorious\n\n"); // \n is for adding a new line after a command is executed
    printf("One \t Two \t Three\n\n"); //\t is for adding a tab
    
    //create a 3x3 matrics using Escape sequence
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
}

// Note that the escape character must be inside the qoute"" not outside it