#include<stdio.h>
void main(){
	int n,i,j;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
}
