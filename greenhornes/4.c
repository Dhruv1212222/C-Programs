#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z;
	
	printf("first angle is: ");
	scanf("%d",&x);
    printf("second angle is: ");
	scanf("%d",&y);
	z=180-x-y;
	printf("third angle is: %d",z);
	getch();
}
