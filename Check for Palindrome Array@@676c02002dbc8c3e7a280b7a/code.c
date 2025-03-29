#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    int n;
    n=x/2;
    int b;
    b=x/2;
    int p=1;
    for(int i=0;i<=n;i++){
        for(int j=n;j>=n;j--){
            if(a[i]==a[j]){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
    }
    // if(p){
    //     printf("YES");
    // }
    // else{
    //     printf("NO");
    // }
}