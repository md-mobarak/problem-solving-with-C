 #include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i <n; i++)
    {
       scanf("%d",&num[i]);
    }
    int sum=0 ;

    for (int i = 0; i < n; i++)
    {
       sum =sum+num[i];
    
    }
    
    printf("%d",sum);
    return 0;
}