 #include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            printf("%d ",arr[i]=1);
        }
        if(arr[i]<0){
             printf("%d ",arr[i]=2);
        }
        if(arr[i]==0){
             printf("%d ",arr[i]=0);
        }
    
    }
    
    return 0;
}