#include<stdio.h>

void main(){
	int a,i,c=0;
	printf("Enter any number:\t");
	scanf("%d",&a);
	
	if(a==1){
	printf("Neither\n");
	}
	else if(a==0){printf("Neither\n");}
	for(i=2;i<a;i++){
		if(a%i==0)
			c++;
	}
	if(c>0)printf("Not a prime\n");
	else printf("Prime!\n");
}
