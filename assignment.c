#include <stdio.h>
// int main (){
//    int a;
//  scanf("%d", &a);
//  if (a > 0 && a%3==0 )
//  {
//     printf("YES");
//  }else{
//      printf("NO");
//  }

//     return 0;
// }


int main() {
    int N;
    scanf("%d", &N);
    if(N<=1000){
        printf("Bad luck! \n");
}
else if(N>= 1500){
    printf("I will buy Punjabi \n");
    printf("I will buy new shoes \n");
    printf("Alisa will buy new shoes\n");
}else if(N < 1500){
    printf("I will buy Punjabi \n");
}
    return 0;
}


