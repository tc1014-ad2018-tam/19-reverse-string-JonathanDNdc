/*
 * This program receives a string and then prints it in reverse order.
 *
 * Author: Jonathan Nuñez de CAceres.
 * Email: A01411277@itesm.mx
 * Date: 17/10/18
 */

#include <stdio.h> //Standar input/output header
#include <string.h> //This is the library where strlen is found.

int main() {
    //Declaration of variable.
    char string[100];

    printf("Enter a text:");
    fgets(string, sizeof(string), stdin);

    printf("Your text in reverse order is:");
    // Prints every character in the string.
    for (int i = strlen(string); i > 0; i--) {
        printf("%c", string[i - 1]);
    }

    return 0;
}