#include<stdio.h>
int perfect_num(int);
void main(){
	int n;
printf("Enter  anumber to be checked:\n");
scanf("%d",&n);
	if(perfect_num(n)){
		printf("Perfect Number\n");
	}
	else{
		printf("Not a perfect number\n");
	}
}


int perfect_num(int x){
	int i,s=0;
	for(i=1;i<x;i++){
	
		if(x%i==0)
			s+=i;
	
	}
	if(s==x){return 1;}
	else{return 0;}
}
