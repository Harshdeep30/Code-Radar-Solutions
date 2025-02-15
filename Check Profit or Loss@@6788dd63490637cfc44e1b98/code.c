#include <stdio.h>
int main(){
    int p ,l ;
    scanf("%d %d",&p,&l);
    if(l>p){
        printf("Profit");
    }
    else if(p==l){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}