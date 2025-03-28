#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int str=1;
    int sp=a/2;
    int ml=a/2+1;
    for(int i=0;i<a;i++){
        for(int j=0;j<=sp;j++){
            printf(" ");
        }
       for(int k=0;k<=str;k++){
            printf("*");

       }
       if(i<=ml){
        st=st+2;
        sp=sp-1;
       }
       else{
        st=st-2;
        sp=sp+1;
       }
    }
}