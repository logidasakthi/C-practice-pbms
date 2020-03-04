#include<stdio.h>

void main(){

        int n,i,j,count;

        printf("enter the number");

        scanf("%d",&n);

        for(i=0;i<n;i++){

            for(j=0;j<n-i-1;j++){

                printf(" ");

            }

            count=1;

            for(j=0;j<=i;j++){

                printf("%d",count);

                count++;

            }

            printf("\n");

        }

}