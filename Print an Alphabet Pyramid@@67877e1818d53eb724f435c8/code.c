#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=65;j<=i+64;j++){
            printf("%d ",j);
        }

    }
    printf("\n");
}