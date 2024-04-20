#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long int ar[n];
    
    // Input
    for (int i = 0; i < n; i++) {
        scanf("%lld", &ar[i]);
    }
    
    // Calculate absolute summation
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
      
        sum += ar[i];
    }
    if(sum<0){
        sum = sum *-1;
         // Output
    printf("%lld\n", sum);
    }else
    {
       // Output
    printf("%lld\n", sum);
    }
    
    
   
    
    return 0;
}
