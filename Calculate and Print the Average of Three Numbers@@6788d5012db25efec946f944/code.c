#include <stdio.h>

int main(){
    int firstInt;
    int secondInt;
    int thirdInt;
    scanf("%d\t", &firstInt);
    scanf("%d\t", &secondInt);
    scanf("%d", &thirdInt);
    float avg = (float)((firstInt + secondInt + thirdInt)/3);
    printf("%.2f", avg);
    return 0;
}