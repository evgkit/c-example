#include <stdio.h>

int main(void) {
    printf("Hello, world!\n");
    printf("EOF - %d\n", EOF);

    int c = 0;
    while((c = getchar()) != EOF) {
        putchar(c);
    }

    double nc;
    for(nc = 0; getchar() != EOF; ++nc) {
        ;
    }
    printf("%.0f\n", nc);

    return 0;
}
