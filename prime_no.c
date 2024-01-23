#include<stdio.h>

void prime();

void main(){
	prime();
}

void prime(){
	int i,j,c;
	for(i=2;i<=100;i++){
		c=0;
		for(j=2;j<i;j++){
			if(i%j==0)c++;

		}
		if(!c){
			printf("%d\t",i);
		}

	}
}
