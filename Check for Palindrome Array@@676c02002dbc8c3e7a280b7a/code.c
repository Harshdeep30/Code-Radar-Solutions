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
    int p;
    for(int i=0;i<=n;i++){
        for(int j=x;j>=n;j--){
            if(a[i]==a[j]){
                p=1;
                break;
            }
            
        }
        if(p){
            printf("YES");
            break;
        }
        else{
            printf("NO");
            break;
        }
    }
    
}