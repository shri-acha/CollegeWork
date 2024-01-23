#include<stdio.h>
int fac(int);
int str(int);

void main(){
	int n;
	printf("Enter a number:\t");
	scanf("%d",&n);

	if(str(n))printf("The number is strong\n");
	else printf("The number isn't strong\n");
}

int fac(int x){
	int i,s=1;
	if(x==0)return 1;
	for(i=1;i<=x;i++){s*=i;}
	return s;
}

int str(int x){
	int n,s=0;
	n=x;
	while(x){
		int r;
		r = x%10;
		if(r==0){
			s+= fac(x);
			break;
		}
		else{

			s+= fac(r);
			x/=10;
			printf("%d",x);
		}
	}
	if(n==s)return 1;
	else return 0;
}
