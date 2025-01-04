// find prime number;
#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    int isPrime = 0;
    printf("\n");

    for(int i = 2;i<num;i++){
        if(num % i == 0){
            isPrime = 1;
        }
    }

    if(isPrime == 1){
        printf("This number is not prime Number");
    }else{
       printf("This number is prime Number");
    }
}