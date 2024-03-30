#include<stdio.h>
#include<conio.h>
 main()
 {

int a, b, c, d;

printf("Enter first numbers: ");
scanf("%d", &a);
printf("Enter second numbers: ");
scanf("%d", &b);
printf("Enter third numbers: ");
scanf("%d", &c);
printf("Enter fouth numbers: ");
scanf("%d", &d);

if(a>b && a>c && a>d)
{

printf("%d a is maximum number",a);

}

else if(b>c && b>d)
{

printf("%d b is maximum number",b);

}

else if(c>d){

printf("%d c is maximum number",c);

}

else{

printf("%d d is maximum number",d);

}

}
