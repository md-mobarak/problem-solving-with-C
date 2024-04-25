//  #include<stdio.h>
//  #include<limits.h>

// int main (){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//      scanf("%d",&arr[i]);
//     }
//     int min = INT_MAX ,pos;
//     for (int i = 0; i < n; i++)
//     {
//       if (arr[i]<min)
//       {
//         min=arr[i];
//         pos= i +1;
//       }
      
//     }
//     printf("%d %d\n",min,pos);
    

//     return 0;
// }


 #include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
    scanf("%d",&arr[i]);
    }
    int newNum;
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<=10)
        {
            /* code */
            newNum= arr[i];
            pos= i;
              printf("A[%d] = %d\n",pos,newNum);
        }
        
    }
   
    
    // A[index] = value 
    return 0;
}

 #include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
    scanf("%d",&arr[i]);
    }
    int newNum;
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<=10)
        {
            /* code */
            newNum= arr[i];
            pos= i;
              printf("A[%d] = %d\n",pos,newNum);
        }
        
    }
   
    
    // A[index] = value 
    return 0;
}

