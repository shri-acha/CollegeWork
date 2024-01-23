#include<stdio.h>

void main(){
	//string->count the characters in the character array until the \0 value is reached
	char str[100];
	int i=0,c=0;
	
	gets(str);
	//gets takes any character from the stdin until a newline is found.
	printf("\n");


	while(str[i]!='\0'){
		if(str[i]!=' ')
		c++;
		
		i++;	
	}
	printf("%d",c);
}
