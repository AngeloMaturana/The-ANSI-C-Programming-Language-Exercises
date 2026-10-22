/*
 * Experiment to find out what happens when prints's argument string contains
 * \c, where c is some character not listed above.
 */
#include <stdio.h>

int main() {
    printf("Example 1: \c\n");
    printf("Example 2: \p\n");
    return 0;
}