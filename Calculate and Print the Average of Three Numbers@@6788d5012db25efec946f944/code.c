#include <stdio.h>

int main(){
    int firstInt;
    int secondInt;
    int thirdInt;
    scanf("%d", &firstInt);
    scanf("%d", &secondInt);
    scanf("%d", &thirdInt);
    printf("%.2f",(firstInt + secondInt + thirdInt)/3);
    return 0;
}