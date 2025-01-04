// get febonacci serice of 10 number using recursion

#include<stdio.h>

void febonacci(int n,int a,int b);

int main (){
    printf("Pebocacci serice :");
    febonacci(10,0,1);
}

void febonacci(int n,int a,int b){
      if (n <= 0) {
        return; 
    }
    printf("%d ",a);

    int next = a+b;
    a = b;
    b = next;


    febonacci(n-1,a,b);
}