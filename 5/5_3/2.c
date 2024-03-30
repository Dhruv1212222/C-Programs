#include<stdio.h>
#include<conio.h>
 main()
{
	int a, b, c, d, large;
	
	printf("Enter first number: ");
	scanf("%d", &a);
	
	printf("Enter second number: ");
	scanf("%d", &b);
	
	printf("Enter third number: ");
	scanf("%d", &c);
	
	printf("Enter first number: ");
	scanf("%d", &d);
	
	large=(a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
	
	printf("%d is maximum number",large);
}
	    
	    
	    
	    
	    
	    
