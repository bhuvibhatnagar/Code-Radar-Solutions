#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(i=N; i>0; i--){
        for(j=N; j>0;j--){
            printf("*");
        }
        printf("\n")
    }
    return 0;
}