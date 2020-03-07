#include<stdio.h>
int fact(int);
void main(){
	int n,b,temp,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0){
	b=n%10;
	sum=sum+fact(b);
	n=n/10;
	}
	if(temp==sum){
	printf("Number is a strong number");
	}
	else{
	printf("Number is not a strong number ");
	}
}
int fact(int b){
int i=1,f=1;
for(i=1;i<=b;i++){
f=f*i;
}
return f;
}
