#include <stdio.h>
int main(){
    int a,prime;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        if(i%a==0){
            prime=1;
            break;
        }
    }
    for(int i=0;i<a;i++){
        if(prime=1){
            printf("Prime");
            break;
        }
        else{
            printf("Not Prime");
        }
        
    }return 0;
    
}