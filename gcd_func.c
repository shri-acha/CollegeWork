#include<stdio.h>

int gcd(int,int);
//takes two numbers loops through the number which is larger and checks for the divisors of each,if common divisor then count is increased,else loop goes
//until a the condition for the loop is met.
void main(){
	int a,b;
	printf("Enter two numbers:\t");
	scanf("%d %d",&a,&b);
	printf("Their greatest common divisor is:\t %d",gcd(a,b));

}

int gcd(int x,int y){
	int d,t;
	if(y>x){
		t=x;
		x=y;
		y=t;
	}
while(1){
	printf("%d %d %d\n",x,y,x%y);
	if(x%y==0){
		d=y;
		printf("%d\n",d);
		break;
	}	
		t= y;
		y= x%y;
		x=t;
}	
return d;
}
