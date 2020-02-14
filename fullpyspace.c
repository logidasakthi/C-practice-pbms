#include <stdio.h>


int main()
{
    
	int row,i,j,k;
   
	printf("enter the number of rows\n");
   
	scanf("%d",&row);
   
	for(i=1;i<=row;i++){
       
		for(j=1;j<=row-i;j++){
           
			printf(" ");
        
       
		}
       
		for(k=1;k<=(2*i)-1;k++){
           
			if(k%2==0){
           
				printf(" ");
           
			}
           
			else{
               
				printf("*");
           
			}
       
		}
       
	printf("\n");
   
	}
   

    
return 0;

}