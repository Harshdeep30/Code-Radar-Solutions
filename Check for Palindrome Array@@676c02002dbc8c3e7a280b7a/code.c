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
    for(int i=0,j=x-1;i<j;i++,j--){
        
            if(a[i]!=a[j]){
                p=0;    
            }
            
            
        }
     
    
    if(p==1){
            printf("YES");
          
        }
        else {
            printf("NO");
            
        }
    
}