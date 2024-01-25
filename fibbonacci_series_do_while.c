#include<stdio.h>

void main(){
	int n,i=1;
	int a=0,b=1;
	int c;
	scanf("%d",&n);
	do{
		printf("%d\t",a);
		c = a+b;
		a = b;
		b=c;
		i++;
	}
	while(i<=n);
}
//START
//READ n
//DISPLAY FIBONNACI TILL N
//STOP
