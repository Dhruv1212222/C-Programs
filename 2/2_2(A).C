#include <stdio.h>  
#include<conio.h>
#define PI 3.14  
 main()   
{   
float b, c, a;  
clrscr();
printf("Enter the value of b: "); // b=radius
scanf("%f", &b);
printf("Enter the value of c: "); // c=radius
scanf("%f", &c);

a = PI * b * c;   // a=value of pi * radius * radius

printf("The area of the circle: %f", a);
  getch();
}