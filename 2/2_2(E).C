#include <stdio.h>
#include<conio.h>
#define PI 3.14 

 main()
  {
  
  float r, p ;

  clrscr();

  printf("Enter the value of r:\n"); //r=radius
  scanf("%f", & r);

  p = 2 * PI * r;
  printf("Perimeter of the circle: %0.2f\n", p);

  getch();
}