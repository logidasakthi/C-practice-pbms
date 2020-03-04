#include<stdio.h>
void main(){
	int n,temp,remain,reverse=0;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
	remain=n%10;
	reverse=reverse*10+remain;
	n=n/10;
	}
	if(temp==reverse){
	printf("the number is palindrome");
	}
	else{
	printf("the number is not palindrome");
	}
}
	

