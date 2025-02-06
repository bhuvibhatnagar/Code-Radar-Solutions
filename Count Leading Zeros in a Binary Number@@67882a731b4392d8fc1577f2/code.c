#include <stdio.h>

int countlead(unsigned int num){
    if(num==0){
        return 32;
    }
    int count=0;
    for(int i=31;i>=0;i--){
        if((num & (1<<i)) == 0){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}
int main(){
    unsigned int num;
    scanf("%u", &num);
    int leadzero = countlead(num);
    printf("%d\n", leadzero);
    return 0;
}