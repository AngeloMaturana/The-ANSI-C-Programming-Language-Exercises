/*
 * Modify the temperature conversion program to print the table in reverse order,
 * that is, from 300 degrees to 0.
 */
#include <stdio.h>

int main() {
    float fahr;

    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3.0f\t%3.2f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    return 0;
}