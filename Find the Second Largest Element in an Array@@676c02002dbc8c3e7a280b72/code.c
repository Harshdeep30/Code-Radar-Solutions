#include <stdio.h>
int main(){
    int x;
    int q;
    int r=-1;
    scanf("%d",&x);
    if(x==1){
            printf("%d",r);
            
        }
    int a[x];
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
            
        }
    }
    for(int i=0;i<x;i++){
        
        
        printf("%d",a[1]);
        break;
        
        }
    }
