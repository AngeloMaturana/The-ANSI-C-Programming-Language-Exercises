/*
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */
#include <stdio.h>

int main() {
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius\tFahr\n");
    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%3.0f\t%3.2f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}