#include<stdio.h>
#include<conio.h>

 main ()
{
	int n,first,last;

	printf("Enter any namber :");
	scanf("%d",&n);

	last= n%10;

	while (n!=0)
	{
	    first=n;
		n = n/10;

	}

	printf("\nsum of fisrt and last digit : %d",first+last);


}
