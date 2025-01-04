// get sum of 5 number using recursion
#include<stdio.h>

int sumOfFiveNumbers(int num);

int main(){
    printf("Sum of 0 to 5 is = %d",sumOfFiveNumbers(5));
    return 0;
}

int sumOfFiveNumbers(int num){
    if(num == 0){
        return 0;
    }
    return num + sumOfFiveNumbers(num-1);
}