//  #include<stdio.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//        printf("%d. I Want More Assignments\n",i+1);
//     }
    

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int N;
//     scanf("%d", &N);

//     if (N > 0) {
//         for (int i = 1; i <= N; i++) {
//             printf("%d ", i);
//         }
//     } else {
//         for (int i = N; i <= 0; i++) {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }

//    reverse with odd index 
//  #include<stdio.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     int numbers[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&numbers[i]);
//     }
     

//     for (int i = n-1; i>=0; i--)
//     {
//        if(i%2==1){
//  printf("%d ",numbers[i]);
//        }

       
//     }
    
//     return 0;
// }

//  #include<stdio.h>
// int main (){
//      int n;
//     scanf("%d",&n);
//     int numbers[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&numbers[i]);
//     }
//     int pos=0;
//     int neg=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (numbers[i]>0)
//         {
//             pos= pos+numbers[i];
           
//         }
//         if (numbers[i]<0)
//         {
//             neg= neg+numbers[i];
           
//         }
      
//     }
//     printf("%d %d",pos, neg);
//     return 0;
// }

 #include<stdio.h>
int main (){
       int n;
    scanf("%d",&n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&numbers[i]);
    }
      int o,p;
    scanf("%d %d",&o,&p);
     
    for (int i = n-1; i>=0; i--)
    {
        if(i==o){
            numbers[i]=p;
        }

     printf("%d ",numbers[i]);
  
    }
   

    
    return 0;
}