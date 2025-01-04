#include<stdio.h>
#include<string.h>

int main(){
    char name[] = "saiyed imtiaj";
    char *ptr = name;
    puts(ptr);
    int length = strlen(ptr);
    printf("Length of the string: %d\n", length);
    return 0;
}