#include<stdio.h>
int main (){

int sum= 0;
int n;
scanf("%d",&n);
    for(int i = 0; i<=n; i=i+1){
        sum=sum+i;
        // printf("%d\n",i);
    }
     printf("%d\n",sum);
    return 0;
}