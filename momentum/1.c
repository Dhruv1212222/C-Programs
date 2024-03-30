#include<stdio.h>
#include<conio.h>

main ()
{
	char n;

	printf("Press Any Key: ");
	scanf("%c",&n);



	 if (n >='a' && n<='z' || n>='A' && n<='Z')
	{
		printf("%c is an alphabet",n);
	}
	
	else if (n>='0' && n <='9')
	{
		printf("It's a digit",n);
		
	}
	
	else
	{
		printf("It's a spicial character",n);
	}
	getch();
}
