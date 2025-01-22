#include <stdio.h>

int main(){
    float firstFloat;
    float secondFloat;
    scanf("%f", &firstFloat);
    scanf("%f", &secondFloat);
    printf("Product: %.2f", firstFloat * secondFloat);
    return 0;
}