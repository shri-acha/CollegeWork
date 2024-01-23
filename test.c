#include<stdio.h>
#include<math.h>
void main()
{
	float A,r,P;
	int t,n;


	printf("Enter principle amount,rate,no of times the compund amount to,time:\t");
	scanf("%f%f%d%d",&P,&r,&n,&t);
		
	A = P*pow(1+r/n,n*t);
	printf("After the time %d the principle amounts to %.2f\n",t,A);
}
