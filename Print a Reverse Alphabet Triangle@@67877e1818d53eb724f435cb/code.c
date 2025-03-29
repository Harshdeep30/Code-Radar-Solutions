#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a+64;i>=65;i--){
        for(int j=65;j<=i+64;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}