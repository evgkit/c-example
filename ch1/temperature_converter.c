#include <stdio.h>
#define CTEMP 36.6

int main(void) {
    printf("Celsius to Fahrenheit:\n");
    printf("%3.1f -> %3.1f \n", CTEMP, (9.0/5.0) * CTEMP + 32.0);
    return 0;
}

