#include<stdio.h>   
#include<math.h>

void dud(int);
void fac(int);
void main()
{	
	int n;
	scanf("%d",&n);
	dud(n);
}


void dud(int x){
	int orig;	int s=0;
	orig = x;
			while(orig!=0){
		s += orig%10;
		orig/=10;
	}
	int y=s;
	printf("%d\t%d\n",(int)pow(s,3),x);
		if(x == pow(s,3)){
			printf("Dudley\n");
	}
		else{
	printf("Not Dudeley\n");
	}	
printf("\nArgument Passed: %d",x);
fac(x);
}

void fac(int y){
	int orig;int f=1;int s =0,i;
	orig = y;
while(orig!=0){
	f=1;
	for(i=1;i<=(orig%10);i++){
		
		f*=i;	
		}
		printf("\n%d\n",f);
	s+=f;
	orig/=10;
	}
}
