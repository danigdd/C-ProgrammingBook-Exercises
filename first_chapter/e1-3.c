#include <stdio.h>

int main(){
    float celsius, fahr;
    float upper, lower, step;

    step = 20;
    lower = 0;
    upper = 300;

    fahr = lower;
    printf("=============\n");
    printf("     F\t   C\n");
    printf("=============\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}