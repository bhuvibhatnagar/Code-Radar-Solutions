#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a == 1 || a == 0){
        printf("Not Prime");
    }
    else if(a == 2 || a == 3 || a==5 || a==7){
        printf("Prime");
    }
    else if(a % 2 == 0){
        printf("Not Prime");
    }
    else if(a % 3 == 0){
        printf("Not Prime");
    }
    else if(a % 5==0){
        printf("Not Prime");
    }
    else if(a % 7==0){
        printf("Not Prime");
    }
    return 0;
}