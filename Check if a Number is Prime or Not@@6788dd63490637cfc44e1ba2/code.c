#include <stdio.h>
int main(){
    int a,prime=0;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if(a%i==0){
            prime=1;
            break;
            
        }
    }
   
        if(prime=1){
            printf("Not Prime");
            break;
        }
        
        
        else{
            printf("Prime");
            
        }
        
    
    return 0;
    
}