#include<stdio.h>
#include<conio.h>
 main()
{
	int a, b, c;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	(a>b)
	? (a>c)
    ?	printf("%d is maximum number",a)
    :	printf("%d is maximum number",c)
    :(b>c)
    ?  printf("%d is maximum number",b)
    :  printf("%d is maximum number",c);
}
