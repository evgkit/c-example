#include <stdio.h>

// count spaces, tabs & end-of-lines
int main(void) {
    int c = 0;

    /*
    double numSpace = 0, numTab = 0, numLine = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++numLine;
        } else if (c == ' ') {
            ++numSpace;
        } else if (c == '\t') {
            ++numTab;
        }
    }
    printf("Spaces: %.0f\n Tabs: %.0f\n Lines: %.0f\n", numSpace, numLine, numTab);
    */

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(c);
            while ((c = getchar()) == ' ') {
                ;
            }
        }
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        if (c == 'b') {
            putchar('\\');
            putchar('b');
        }
        if (c == '\\') {
            putchar('\\');
        }
        else {
            putchar(c);
        }
    }
}
