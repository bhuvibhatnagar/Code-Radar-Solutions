#include <stdio.h>

int main(){
    int num,n;
    scanf("%d %d",&n,&num);
    if(n<0 || n>31){
        printf("1");
        return 1;
    }
    else{
        printf("0");
    }
    return 0;
}