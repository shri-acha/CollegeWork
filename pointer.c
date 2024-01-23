#include<stdio.h>
#include<stdlib.h>
void main(){
    char* heapMemory = malloc(100);
    if (NULL == heapMemory){
        perror("Malloc failed bruh");
    }
    *heapMemory =  6;
    printf("The value in x is %c",heapMemory);
}