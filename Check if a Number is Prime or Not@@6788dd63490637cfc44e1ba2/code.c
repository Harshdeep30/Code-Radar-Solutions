#include <stdio.h>
int main(){
    int a,prime;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        if(a%i==0){
            prime=1;
            break;
        }
    }
    for(int i=0;i<a;i++){
        if(prime){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
        return 0;
    }
    
}