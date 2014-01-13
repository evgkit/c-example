#include <stdio.h>

int main(int argc, char* argv[]) {
    int ndigits[10];
    for (int i = 0; i < 10; ++i) {
        ndigits[i] = 0;
    }

    int c = 0;
    int nspace = 0;
    int nother = 0;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigits[c - '0'];
        } else if (c == ' ' || c == '\t' || c == '\n') {
            ++nspace;
        } else {
            ++nother;
        }
    }

    printf("digits: ");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", ndigits[i]);
    }
    printf(", nspace: %d, nother: %d", nspace, nother);
}
