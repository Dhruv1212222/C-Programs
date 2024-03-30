#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, c;
	printf("Enter first numbers: ");
	scanf("%d", &a);
		printf("Enter second numbers: ");
	scanf("%d", &b);
		printf("Enter third numbers: ");
	scanf("%d", &c);
	 
	 if(a==b || b==c || c==a)
	{
		printf("both numbers are same");
	}
	else
	{
		if(a < c)
	{
		if(a < b)
		{
			printf("a: %d is minimum number: ", a);
		}
		else
		{
			printf("b: %d is minimum number: ", b);
		}
	}
	else if(b < c)
		printf("b: %d is minimum number: ", b);
	else
		printf("c: %d is minimum number: ", c);
	}
}
