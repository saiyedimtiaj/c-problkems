// sorting an array
#include<stdio.h>

void sorting(int arr[],int n);

int main(){
    int arr[] = {5,2,67,82,6,79,22,4,79,10};
    sorting(arr,10);
    printf("Array after sorting :");
    for(int i = 0;i<10;i++){
        printf("%d ",arr[i]);
    }
}

void sorting(int arr[],int n){
    for(int i = 0;i < n - 1;i++){
        for(int j = 0; j<n-i -1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}