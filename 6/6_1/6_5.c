
#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;

	printf("Enter first year : ");
	scanf("%d",&x);
	printf("Enter first year : ");
	scanf("%d",&y);
	printf("\nLeap years :\n");

	while(x<=y)
	{
		if(x%4==0)
		{
			printf("%d\n",x);
		}
		x++;
	}
}
