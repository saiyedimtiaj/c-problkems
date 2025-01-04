// get large number for array;
#include<stdio.h>
int main(){
    int arr[] = {5,2,67,82,6,79,22,4,79,10};
    int large = arr[0];
    for(int i = 0;i<10;i++){
        if(large > arr[i]){
            large = arr[i];
        }
    }

    printf("The large number from the array is : %d",large);
}