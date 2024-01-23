#include<stdio.h>
#include<math.h>


void main(){
	int n,c=0,s=0,x,y;	
	int orig;	
	printf("Enter a number:\n");
	scanf("%d",&n);

	for(orig=n;orig!=0;orig/=10){
	
		c++;
	
	}

	for(orig=n;orig!=0;orig/=10){	
		s+= (int)(0.5+pow(orig%10,c));
		
	}
	if(s==n){
		printf("Armstrong\n");
	}
	else{
		printf("N Armstrong\n");
	}
}
