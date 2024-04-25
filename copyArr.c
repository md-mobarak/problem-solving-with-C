 #include<stdio.h>
int main (){
    // input 
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
       
    }
    int m;
    scanf("%d",&m);
    int brr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&brr[i]);
    
    }

    // output
    int ansArr[n+m];
    
    for (int i = 0; i < n; i++)
    {
        ansArr[i]= arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        /* code */
        ansArr[n+i]= brr[i];
      
    }
    for (int i = 0; i < n+m; i++)
    {
        printf("%d " ,ansArr[i]);
    }
    
    
  
    
    return 0;
}