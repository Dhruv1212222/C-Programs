#include<stdio.h>
main()
{
	int x,y;
    int *p=&x,*q=&y;
	printf("enter the first number: ");
	scanf("%d",&x);
	printf("enter the second number: ");
	scanf("%d",&y);
	 
	 *p=*p^*q;
	 *q=*q^*p;  
	 *p=*p^*q;
	 printf("after the swaping");
	 printf("\n%d\n",x);
     	 printf("%d",y);

}

