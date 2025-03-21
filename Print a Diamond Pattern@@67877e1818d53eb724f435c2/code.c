#include <stdio.h>
int main(){
    int a,n;
    scanf("%d",&n);
    a=n-1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }

    for(int l=1;l<=a-1;l++){
        for(int m=1;m<=l;m++){
            printf(" ");
        }
        for(int x=2*l-1;x<=n;x++){
            printf("*");
        }
        printf("\n");
    }




}
