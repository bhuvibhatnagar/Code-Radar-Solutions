#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);
    if(a>= (b||c)){
        printf("%d",a);
    }
    else if(b>=(a||c)){
        printf("%d", b);
    }
    else{
        printf("%d", c);
    }
    return 0;
}