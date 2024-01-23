#include<stdio.h>
#include<math.h>

void main(){
	int i,j,a,s=0;
 	printf("Enter a number to be checked:\t");
	scanf("%d",&a);
	j= a;
	while(a){
		if(a%10==0){
			s+=a;
			break;
		}	
		s += a%10;
		a /=10;
	
		}
	printf("%d %d",s,j);
	if(j==(int)(pow(s,3)+0.5)){
		printf("Dudeney's Number\n");
	}
	else{
		printf("Not it\n");
	}
	
}
