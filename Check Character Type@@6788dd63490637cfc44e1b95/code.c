#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a==65 || a==97 || a==69 || a==101 || a==73 || a==79 || a==85 || a==105 || a==111 || a==117){
        printf("Vowel");
    }
    else if(a>=32 || a<=64){
        printf("Special Character");

    }
    else if(a==isdigit){
        printf("Digit");
    }
    else{
        printf("Consonant");
    }
    return 0;
}