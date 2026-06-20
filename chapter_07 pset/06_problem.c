#include <stdio.h>
int main(){
 int arr[10][10];
 int multiplicatin[]={1,2,3,4,5,6,7,8,9,10};
for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
        arr[i][j]=multiplicatin[i]*(j+1);
    }
   
}
for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
return 0;
}