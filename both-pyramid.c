#include <stdio.h>

int main()
{
    
	int row,i=1,j=1,k=1,l=1,newrow;
   
	printf("enter the number of rows\n");
   
	scanf("%d",&row);
   
	newrow=row;
   
	for(i=1;i<=row;i++){
       
		for(k=1;k<i;k++){
           
			printf(" ");
       
		}
		printf("-");
		printf(" ");
       
		for(j=1;j<=(newrow*2)-1;j++){

           					if(j%2==0)
           
						printf(" ");
           
					else
           
						printf("*");
       
		}	
       
		newrow--;
       		printf(" ");
       		printf("-");
		printf("\n");
       
	}
	for(l=1;l<=row+2;l++){
           if(l==row+2){
               printf("-");
               printf("\n");
              
           }
           else{
               printf(" ");
           }
       }

      	for(l=1;l<=row+2;l++){
          if(l==row+2){
              printf("-");
          }
          else{
              printf(" ");
          }
      }
      printf("\n");
   
       
	for(i=1;i<=row;i++){
       
		for(j=1;j<=row-i;j++){
           
			printf(" ");
        
       
		}
		printf("-");
		printf(" ");
       
		for(k=1;k<=(2*i)-1;k++){
           
			if(k%2==0){
           
				printf(" ");
           
			}
           
			else{
               
				printf("*");
           
			}
       
		}
		printf(" ");
		printf("-");
       
	printf("\n");
   
	}
    
return 0;

}
