#include<stdio.h>
void pyramid_no_r();
void pyraid_line_r();

void main(){
	pyramid_no_r();
}


void pyramid_line_r(){
	 int i,j;
	 for(i=1;i<=3;i++){
	 	for(j=1;j<=i;j++){
			printf("%d",i);
			}
		printf("\n");
	 }
}

void pyramid_no_r(){

	int i,j,c=1;
	for(i=1;i<=3;i++){
		for(j=1;j<=i;j++){
			printf("%d",c);
			c++;
		}
	printf("\n");
	}
	
}
