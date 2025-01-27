#include <stdio.h>

int main(){
    char my;
    scanf("%c", &a);
    if(my>='d' && 'f'<=my<='h' && 'j'<=my<='n' && 'p'<=my<='t' && 'v'<=my<='z'){
        printf("Consonant");
    }
    else if(my == 'a','e','i','o','u'){
        printf("Vowel");
    }
    else if(my>=0){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}