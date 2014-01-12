#include <stdio.h>

int main(void) {
    printf("Hello, world!\n");
    printf("EOF - %d\n", EOF);

    int c = 0;
    while((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}
