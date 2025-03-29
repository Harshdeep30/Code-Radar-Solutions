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
            else if(a[i]!=a[j]){
                p=0;
                break;
            }
            
        }
        // if(p=1){
        //     printf("YES");
        //     break;
        // }
        // else if(p=0){
        //     printf("NO");
        //     break;
        // }
    }
    if(p==1){
            printf("YES");
          
        }
        else if(p==0){
            printf("NO");
            
        }
    
}