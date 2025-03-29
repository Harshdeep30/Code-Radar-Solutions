#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2!=0){
        for(int j=0;j<i;j++){
            if(j%2!=0){
                printf("0 ");

            }
            else{
                printf("1 ");
            }}

        }
    else{
        for(int j=i;j>0;j--){
            if(j%2!=0){
                printf("0 ");

            }
            else{
                printf("1 ");
            }}
    }
        printf("\n");
    }
}