#include <stdio.h>

int j;                              // file scope of j begins

void f(int i) {                     // blocks scope of i begins
    int j = 1;                      // block scope of j begins; hides file-scope j
    i++;                            // i refers to the function parameter
    for (int i = 0; i < 5; i++) {   // block scope of loop-local i begins
        int j = 2;                  // block scope of inner j begins
        printf("%d\n", j);          // inner j in scope, prints 2
    }
    printf("%d\n", j);              // outer j in scope, prints 1
}

int main() {
    f(0);
}
