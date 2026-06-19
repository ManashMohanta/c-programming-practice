#include <stdio.h>
int main(){
   int n=3;
   for(int i=0;i<3;i++){
  
    //i=0   1 star
    //i=1    3 star
    //i=2    5 star
   // formula for number of stars in each row is 2*i+1
  
       for(int j=0;j<2*i+1;j++){
           printf("*");
       }
       printf("\n");
    }
    return 0;
}