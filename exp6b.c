#include<stdio.h>
int main(){
    int size, temp;
    int arr[6]={1,2,3,4,5,6}; 
    // Bubble Sort
    temp=0;
    for (int i=0;i<6;i++){
        for (int j=0;j<6;j++){
            if (arr[j]> arr[j+1]){
                //Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array in ascending order");
    for (int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
    return 0;
}