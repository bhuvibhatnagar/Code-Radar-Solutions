#include <stdio.h>

int main(){
    int firstInt;
    int secondInt;
    int thirdInt;
    scanf("%d\t", &firstInt);
    scanf("%d\t", &secondInt);
    scanf("%d", &thirdInt);
    printf("%d",(firstInt + secondInt + thirdInt)/3);
    return 0;
}