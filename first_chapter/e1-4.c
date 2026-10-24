#include <stdio.h>

int main(){
    float celsius, fahr;
    float lower, upper, step;

    step = 10;
    lower = -30.0;
    upper = 50.0;

    celsius = lower;

    printf("=============\n");
    printf("     C\t   F\n");
    printf("=============\n");
    
    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0)) + 32.0;
        printf("%6.0f %6.0f\n", celsius, fahr);
        celsius += step;
    }
    return 0;

}