#include <stdio.h>

static unsigned int counter = 0;

void increment(void) {
    counter++;
    printf("%d \n", counter);
}

unsigned int retrieve(void) {
    return counter;
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        increment();
        printf("Current value %d retrieved\n", retrieve());
    }
    return 0;
}

