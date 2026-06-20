#include <stdio.h>
void printArray(int arr[],int n){
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
    void reverseArray(int arr[], int n){
        int temp;
        for (int i=0; i<n/2; i++){
            temp = arr[i];
            arr[i] = arr[n-1-i];
            arr[n-1-i] = temp;

        }
    }

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printArray(arr, 10);
    reverseArray(arr, 10);
    printArray(arr, 10);
    return 0;
}