#include <stdio.h>

int main(){
    int num,n;
    scanf("%d %d",&n,&num);
    int bitvalue = (num>>n) & 1;
    printf("%d",bitvalue);
    return 0;
}