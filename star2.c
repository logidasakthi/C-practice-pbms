#include<stdio.h>
void main(){
	int n,i,j;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=n-i;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
}
