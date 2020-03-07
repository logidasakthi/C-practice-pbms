#include<stdio.h>
void main(){
	int n,square;
	printf("enter the number");
	scanf("%d",&n);
	square=n*n;
	if(square%100==n){
		printf("the number is automorphic");
	}
	else{
		printf("the number is not automorphic");
	}
}
