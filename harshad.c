#include<stdio.h>
void main(){
	int n,b,temp,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		b=n%10;
		sum=sum+b;
		n=n/10;
	}
	if(temp%sum==0){
		printf("the number is harshad");
	}
	else{
		printf("the number is not harshad");
	}
}

