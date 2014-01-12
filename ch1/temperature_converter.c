#include <stdio.h>

int fahrToCels(void) {
    //float tempCelsius = 0, tempFahrenheit = 0;

    printf("Fahrenheit \t Celsius \n");
    for(int i = 300; i >= 00; i -= 20) {
        //tempFahrenheit = i;
        //tempCelsius = (5.0/9.0) * (tempFahrenheit - 32.0);
        printf("%6d \t\t %6.1f \n", i, (5.0/9.0) * (i - 32.0));
    }
    return 0;
}

int celsToFahr(void) {
    //float tempCelsius = 0, tempFahrenheit = 0;

    printf("Celsius \t Fahrenheit \n");
    for(int i = 0; i <= 300; i += 20) {
        //tempCelsius = i;
        //tempFahrenheit = (9.0/5.0) * (tempCelsius + 32.0);
        printf("%6d \t\t %6.1f \n", i, (9.0/5.0) * (i + 32.0));
    }
    return 0;
}

int main(void) {

    fahrToCels();
    celsToFahr();
    return 0;
    /*printf("F->C or C->F : ? (1/2)\n");
    char answer;
    scanf(answer);

    case(answer)
        "1": {
            fahrToCels();
            break;
        }
        "2": {
            celsToFahr();
            break;
        }
*/
}

