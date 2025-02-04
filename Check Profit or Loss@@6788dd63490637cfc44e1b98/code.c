#include <stdio.h>

int main(){
    int cost;
    int selling;
    scanf("%d\t", &cost);
    scanf("%d", &selling);
    if(cost<selling){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}