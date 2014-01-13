#include <stdio.h>

#define IN 1 //in word
#define OUT 0 //out word

/* stream-out as words */
int main(void) {
    int c = 0;
    int state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else {
            putchar(c);
            state = IN;
        }
    }
}
