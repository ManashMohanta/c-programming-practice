#include <stdio.h>
int main(){
  FILE *ptr;
  int num1,num2,num3;
ptr=fopen("myfile.txt","r");
 fscanf(ptr,"%d%d%d",&num1,&num2,&num3);
 printf(" the value of num1 %d\n",num1);
    printf(" the value of num2 %d\n",num2);
    printf(" the value of num3 %d\n",num3);
 fclose(ptr);
    return 0;
}