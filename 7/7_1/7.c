#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	
         for (i=1;i<=5;i++) 
		 {
		  for (j=1;j<=i;j++)
		   {
			printf("%c",'A' + j-1);
		}
		printf("\n");
	}
	
}
