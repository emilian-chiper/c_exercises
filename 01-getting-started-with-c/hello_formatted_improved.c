#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    if (printf("%s\n", "Hello, world!") < 0) {
        exit(EXIT_FAILURE);
    }
    exit(EXIT_SUCCESS);
}
