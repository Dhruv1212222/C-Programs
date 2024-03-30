#include <stdio.h>
#include<conio.h>
 main()
{
    float b, h, a;

  clrscr();
    
    printf("Enter the value of b: "); //b=base
    scanf("%f", &b);
    printf("Enter the value of h: "); //h=height
    scanf("%f", &h);
    
    a = (b * h) / 2; // area of triangle = base * height/2

    printf("Area of the triangle =%f", a);
    
getch();

}