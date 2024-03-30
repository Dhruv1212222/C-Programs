#include <stdio.h>
#include<conio.h>
main()
{ 

	int n,m;
	
	n=1;
	
	printf("Enter the value of M: ");
	scanf("%d",&m);
	
	printf("Numbers from 1 to %d: \n",m);
	
	do
	{
	
		printf("%d\n",n);
		
		n++;
	}
	
	while(n<=m);
}

