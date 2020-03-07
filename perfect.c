#include<stdio.h>
void main(){
	int n,i,temp,sum=0;
	printf("enter the given number");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(temp==sum){
		printf("The number is perfect");
	}
	else{
		printf("The number is not perfect");
	}
}
