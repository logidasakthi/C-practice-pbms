#include<stdio.h>
void main(){
	int n,i,j,count=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			count=count+1;
			printf("%d\t",count);
		}
		printf("\n");
	}
}
