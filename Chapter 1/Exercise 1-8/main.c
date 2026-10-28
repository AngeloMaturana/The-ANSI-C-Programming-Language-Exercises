/*
 * Write a program to count blanks, tabs, and newlines.
 */
#include <stdio.h>

int main() {
    int blanks = 0, newlines = 0, tabs = 0, c;

    while ((c = getchar()) != EOF) {
        if      (c == ' ')  ++blanks;
        else if (c == '\n') ++newlines;
        else if (c == '\t') ++tabs;
    }

    printf("blanks: %d, newlines: %d, tabs: %d\n", blanks, newlines, tabs);

    return 0;
}