#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter the first number: ");
	scanf("%d",&a);
	printf("enter second number: ");
	scanf("%d",&b);
	
		if(a<b)
		{
		printf("display the first number beacuse it's minimum number: %d",a);
    	}
    	else
    	printf("display the second number beacuse it's minimum number: %d",b);
    	getch();
}
