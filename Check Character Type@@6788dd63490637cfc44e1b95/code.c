#include <stdio.h>

int main(){
    char my;
    scanf("%c", &my);
    if(my == 'a'||'e'||'i'||'o'||'u'){
        printf("Vowel");
    }
    else(my>='a' && my<= 'z'){
        printf("Consonant");
    }
    else if(my>='0' && my<= '9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}