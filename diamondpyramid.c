
#include <stdio.h>


int main()
{
 
	int row,i,j,k,newrow;
   
	printf("enter the number of rows\n");
   
	scanf("%d",&row);
  
	for(i=1;i<=row;i++){
       
		for(j=1;j<=row-i;j++){
           
				printf(" ");
        
       
		}
       
		for(k=1;k<=(2*i)-1;k++){
           
				printf("*");
       
		}
       		
		printf("\n");
   
	}
   
	newrow=row-1;
   
	for(i=1;i<=row;i++){
 
			printf(" ");        
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