#include<stdio.h>

void main()
{
 int i,j,count=0,end;
	char oldstr[10];
	char newstr[10];
	printf("enter the string:");
	scanf("%s",&oldstr);
	printf("%s\n",oldstr);
	for(i=0;oldstr[i]!='\0';i++){
	    count++;
	}
	printf("%d\n",count);
	end=count-1;
	for(i=0;i<count&&oldstr[i]!='\0';i++){
	    newstr[i]=oldstr[end];
	    end--;
	   
	}
	newstr[i]='\0';
	printf("%s\n",newstr);
	//if(strcmp(oldstr,newstr)==0)
	//printf("the string is palindrome");
	//else{
	 //   printf("the string is not palindrome");
	//}

}
