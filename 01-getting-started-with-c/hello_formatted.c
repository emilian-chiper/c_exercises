#include <stdio.h>
#include <stdlib.h>
int main(void) {
    if (printf("%s\n", "Hello, world!") == EOF) {
        exit(EXIT_FAILURE);
    }
    exit(EXIT_SUCCESS);
}
