#include<stdio.h>
//write a program to add,subtract,or multiply or divide
void main(){
    char c;
    float s,a,b;
    scanf("%f %f %c",&a,&b,&c);
    switch (c)
    {
    case '+':
        s= a+b;
    break;
     case '*':
        s= a*b;
    break;
     case '-':
        s= a-b;
    break;
     case '/':
        s= a/b;
    break;
    
    default:
        printf("!\n");
        break;
    }
    printf("%0.2f",s);
}