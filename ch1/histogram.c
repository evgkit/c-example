#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
    int state = 0, nc = 0, nw = 0, c = 0;
    int hist[10];
    for (int i = 0; i < 10; i++) {
        hist[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                hist[nw++] = nc;
                state = OUT;
                nc = 0;
            }
        } else {
            nc++;
            state = IN;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf(" %d", hist[i]);
    }

    return 0;
}
