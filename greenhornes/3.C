#include<stdio.h>
#include<conio.h>
main()
{
float base,hra,da,ta,gs;
printf("base salary is:");
scanf("%f",&base);
 hra = (base * 10) / 100;
da = (base * 5) / 100;
ta = (base * 8) / 100;
gs = base + hra + da + ta;
printf("gross sallary is: %f",gs);
getch();
}
