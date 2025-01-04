// swap 2 numbers using pointer and function
#include<stdio.h>
void swap(int *num1,int *num2);

int main (){
    int num1 = 5,num2 = 10;
    // printf("Before swap num1 = %d and num2 = %d \n",num1,num2);
    swap(&num1,&num2);
    // printf("After swap num1 = %d and num2 = %d",num1,num2);
}

void swap(int *num1,int *num2){
    printf("Address of num1 = %d \n",num1);
    printf("Address of num1 = %d",*num1);
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}