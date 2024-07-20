// array to contain multiplication table.of 3 no.
// #include <stdio.h>

// int multabARR(int *arr,int num){
//     for(int i=0;i<10;i++){
//         arr[i]=num*(i+1);
//    }
// }

// int main() {

//     int multab[3][10];//for.storing table
//     int arr[3]; //for storing user input about which table 
    
//   for(int i=0;i<3;i++){
//    printf("ENTER THE %d NO YOU WANT TO STORE TABLE OF:\n",i+1);
//    scanf("%d",&arr[i]);
//   }
  
//     multabARR(multab[0],arr[0]);
//     multabARR(multab[1],arr[1]);
//     multabARR(multab[2],arr[2]);
    
//    for(int i=0;i<10;i++){
//     printf("%d X %d is %d\n",arr[0],i+1,multab[0][i]);
//    }
//    printf("\n\n");
   
//    for(int i=0;i<10;i++){
//     printf("%d X %d is %d\n",arr[1],i+1,multab[1][i]);
//    }
//    printf("\n\n");
   
//    for(int i=0;i<10;i++){
//     printf("%d X %d is %d\n",arr[2],i+1,multab[2][i]);
//    }
//    printf("\n\n");
//     return 0;
// }


// short version
// array to contain multiplication table.of 3 no.
#include <stdio.h>

int multabARR(int *arr,int num){
    for(int i=0;i<10;i++){
        arr[i]=num*(i+1);
   }
}

int main() {

    int multab[3][10];//for.storing table
    int arr[3]; //for storing user input about which table 
    
  for(int i=0;i<3;i++){
   printf("ENTER THE %d NO YOU WANT TO STORE TABLE OF:\n",i+1);
   scanf("%d",&arr[i]);
   multabARR(multab[i],arr[i]);
  }
  
  for(int i=0;i<3;i++){
      printf("THE MULTIPLICATION TABLE OF %d is :\n",arr[i]);
      for(int j=0;j<10;j++){
        printf("%dX%d is %d\n",arr[i],j+1,multab[i][j]);
      }
printf("**COMPLETE***\n\n\n");
  }
 
    return 0;
}