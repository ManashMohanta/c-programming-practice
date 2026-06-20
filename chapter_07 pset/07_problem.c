#include <stdio.h>
int main(){
    int n1,n2,n3,n4,n5;
    printf("any 5 no.");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
 int arr[5][10];
 
 int multiplicatin[]={n1,n2,n3,n4,n5};
for (int i=0; i<5; i++){
    for (int j=0; j<10; j++){
        arr[i][j]=multiplicatin[i]*(j+1);
    }
   
}
for (int i=0; i<5; i++){
    for (int j=0; j<10; j++){
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
return 0;
}