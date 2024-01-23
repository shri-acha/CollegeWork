#include<stdio.h>
int fac(int);
void main(){
	int x;
	printf("Enter a value:\t");
	scanf("%d",&x);
	printf("%d",fac(x));
}

int fac(int a){
	
	int i;
	long int f=1;
	for(i=1;a >= i ;i++){
		f*=i;
	}

	return f;
}
