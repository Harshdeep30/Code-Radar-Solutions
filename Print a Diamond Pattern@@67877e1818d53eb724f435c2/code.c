#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=2*a-1;i++){
        if(i!=a){
            for(int k=1;k<=a-i;k++){
                printf(" ");
            }
            for(int j=1;j<=2*i-1;j++){
                printf("*");
            }
        }
        else{
            for(int l=1;l<=i;l++){
                printf("*");
            }
        }
        printf("\n");
        }
    }
