#include<stdio.h>
//#include<conio.h>
int main(){
	int n,temp,seperate,calculate=0;
	printf("enter the no: ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
	seperate=n%10;
	calculate=calculate+(seperate*seperate*seperate);
	n=n/10;
	}
	if(temp==calculate){
	printf("%d is a armstrong number",temp);
	}
	else{
	printf("%d is not a armstrong number",temp);
	}
	return 0;
}
