#include <stdio.h>

void decimal(int n){
    int size = sizeof(n) * 8;
    for(int i =size-1;i>=0;i--){
        int bit = (n>> i)&1;
        printf("%d", bit);
    }
    printf("\n");
}
int main(){
    int decimalnum;
    scanf("%d", &decimalnum);
    decimal(decimalnum);
    return 0;
}