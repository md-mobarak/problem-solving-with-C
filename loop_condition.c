#include<stdio.h>
int main (){


int n;
scanf("%d",&n);
    for(int i = 1; i<=n; i=i+1){
        if (i%2==0)
        {
             printf("%d\n -even",i);
        }else{
                printf("%d\n -odd",i);
        }
        
   
        // printf("%d\n",i);
    }
    //  printf("%d\n",sum);
    return 0;
}
