#include<stdio.h>

void main(){

	int n,i,j,count=0;

	printf("enter the number");

	scanf("%d",&n);

	for(i=0;i<n;i++){
 
   		for(j=0;j<n-i-1;j++){

        			printf(" ");
   
		 }
		for(j=0;j<=i;j++){

       			count++; 
			printf("%d",&count);
   
		 }
    
		printf("\n");

	}
		
}