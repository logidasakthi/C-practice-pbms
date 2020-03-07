#include<stdio.h>

void main(){

	int number,a,b[10],i=0;

	printf("enter the number");

	scanf("%d",&number);
	    for(i=0;number>0;i++){
	        a=number%2;
	        b[i]=a;
	        number=number/2;
	    }
	    for(i=i-1;i>=0;i--){
	        printf("%d",b[i]);
	    }
}
