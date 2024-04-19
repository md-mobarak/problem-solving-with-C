//  #include<stdio.h>
// int main (){
//     int a;
//     int b;
//     scanf("%d %d",&a,&b);
//     if(a>=b){
//         printf("Yes\n");
//     }else{
//         printf("No\n");
//     }
//     return 0;
// }


//  #include<stdio.h>
// int main (){
//     int A ;
//     int B;
//     scanf("%d %d",&A,&B);
//     for (int i = 1; i <=100000; i++)
//     {
//         if(i%A==0 && i%B==0){
//  printf("Multiples");
//         }
//         else{
//          printf("No Multiples");
//     }
       
//     }
    
//     return 0;
// }
 #include<stdio.h>
int main (){
    char a;
    scanf("%c",&a);
    if(a>='a'&& a<= 'z'){
        int ans = a - 32;
        printf("%c",ans);
    }else 
    {
       int ans = a + 32;
        printf("%c",ans);
    }
    

    return 0;
}

 #include<stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    int digit = x/1000;
    if (digit%2==0)
    {
        printf("EVEN\n");
    }else{
          printf("ODD\n");
    }
    
    return 0;
}