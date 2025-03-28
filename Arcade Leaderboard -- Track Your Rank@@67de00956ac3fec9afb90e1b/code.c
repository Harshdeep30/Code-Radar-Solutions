// Your code here...
#include <stdio.h>

int main(){
    int n,m;
    scanf("%d",&n);
    int ranked[10000];
    for(int i=0;i<n;i++){
        scanf("%d",&ranked[i]);
    }
    scanf("%d",&m);
    int player[10000];
    for(int i=0;i<m;i++){
        scanf("%d",&player[i]);
    }
    int result[10000];
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ranked[i]>player[j]){
                count=count+1;
            }
        }
    }
    for(int i=0;i<m;i++){
        printf("%d\n",result[i]);
    }
    return 0;
}









