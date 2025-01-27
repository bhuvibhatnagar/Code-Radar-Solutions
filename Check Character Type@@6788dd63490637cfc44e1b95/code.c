#include <stdio.h>

int main(){
    char my;
    scanf("%c", &my);
    if('b'<=my<='d' || 'f'<=my<='h' || 'j'<=my<='n' || 'p'<=my<='t' || 'v'<=my<='z'){
        printf("Consonant");
    }
    else if(my == 'a'||'e'||'i'||'o'||'u'){
        printf("Vowel");
    }
    else if('0'<=my<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}