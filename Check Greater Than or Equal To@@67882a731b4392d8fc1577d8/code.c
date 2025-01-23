#include <stdio.h>

int a(){
    int a;
    int b;
    scanf("%d\t", &a);
    scanf("%d", &b);
    if(a>=b){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}