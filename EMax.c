 #include<stdio.h>
 #include<limits.h>
int main (){
    int n;
    scanf("%d",&n);
    int a;
    int max =0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        scanf("%d",&a);
        if(a>max){
            max =a;
        }
    }
    printf("%d\n",max);
    
    return 0;
}