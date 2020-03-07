#include<stdio.h>
void main(){
	int n,i,temp,abundance,sum=0;
	printf("enter the given number");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(temp<=sum){
		abundance=sum-temp;
		printf("%d is the abundance of %d",abundance,temp);
	}
	else{
		printf("the number has no abundance");
	}
}
