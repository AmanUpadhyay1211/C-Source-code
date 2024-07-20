// func which can reverse an array
#include <stdio.h>

int reverseARR(int *ARR,int n){
        int temp[n];
        
       for(int i=0;i<n;i++){
           temp[i] = ARR[n-1-i]; // -1 is important because in c the index starts with 0
       }
      for(int i=0;i<n;i++){
           ARR[i]= temp [i];
       }
        
        return 0;
    }

int main() {
    
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    
    for(int i=0;i<10;i++){
        printf("ARRAY BEFOR FUNC call: %d \n",arr[i]);
    }
    reverseARR(arr,10);
    printf("\n");
    
    for(int i=0;i<10;i++){
        printf("ARRAY AFTER FUNC CALL: %d \n", arr[i]);
    }
    
    

    return 0;
}