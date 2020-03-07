#include<stdio.h>
#include<string.h>
void main(){
	char str[10],newstr[10];
	printf("enter the string");
	gets(str);
	if(str==NULL){
	 	printf("it is not a string");
	}
	else{
		newstr=strrev(str);
	}
	if(strcmp(str,newstr)==0){
		printf("the given string is palindrome");
	}
	else{
		printf("the given string is not palindrome");
	}
	
}
