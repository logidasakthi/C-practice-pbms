#include <stdio.h>


int main()
{

 	int row,i,j,k,newrow;
  
	printf("enter the number of rows\n");
   
	scanf("%d",&row);
   
	newrow=row;
   
	for(i=1;i<=row;i++){
         
		for(k=1;k<i;k++){
           
			printf(" ");
       
		}
       
		for(j=1;j<=(newrow*2)-1;j++){
          
			printf("*");
       
		}
       
		newrow--;
     
       
		printf("\n");
   
	}
   
    
return 0;

}
