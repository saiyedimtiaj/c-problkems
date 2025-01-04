// reverse an array
#include<stdio.h>

void reverse (int *arr,int n){
    for(int i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main(){
    int arr[] = {5,2,67,82,6,79,22,4,79,10};

    reverse(arr,10);

    // show the reverse array
    for(int k = 0;k<10;k++){
        printf("%d ", arr[k]);
    }
}