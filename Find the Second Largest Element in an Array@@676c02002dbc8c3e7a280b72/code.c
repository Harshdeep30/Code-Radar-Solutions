#include <stdio.h>
int main(){
    int x;
    int q;
    scanf("%d",&x);
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
            else{
                q=1;
            }
        }
    }
    for(int i=0;i<x;i++){
        if(q=1){
            printf("-1");
        }else{
        printf("%d",a[1]);
        break;}
    }
}