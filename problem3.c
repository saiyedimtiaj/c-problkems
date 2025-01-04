// get fectorial of five numbers

#include<stdio.h>
int factorial(int num);

int main(){
    printf("Factorial of 0 to 5 is = %d",factorial(5));
}

int factorial(int num){
    if(num == 0){
        return 1;
    }
    return num * factorial(num -1);
}