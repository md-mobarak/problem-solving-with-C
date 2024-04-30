#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int minValue = arr[0]; // Initialize with the first element
    int minValueInd = 0; // Initialize with the index of the first element
    int maxValue = arr[0]; // Initialize with the first element
    int maxValueInd = 0; // Initialize with the index of the first element
    
    for (int i = 0; i < n; i++) { // Start from the second element
        if (arr[i] < minValue) {
            minValue = arr[i];
            minValueInd = i;
          
           
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i]; 
            maxValueInd = i; 
          
           
        }
    }
    for (int i = 0; i < n; i++)
    { 
        if(i==minValueInd){
            arr[i]= maxValue;
            
        }
        if(i==maxValueInd){
            arr[i]= minValue;
            
        }

      printf("%d ",arr[i]);
    }
    

    // printf("Minimum value and Index: %d %d\n", minValue, minValueInd);
    // printf("Maximum value and Index: %d %d\n", maxValue, maxValueInd);

    return 0;
}
