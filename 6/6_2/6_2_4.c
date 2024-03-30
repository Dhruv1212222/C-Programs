#include<stdio.h>
#include<conio.h>
 main()
  {
  
  int n,m;

  n= 1;

  printf("Enter the value of N: ");
  scanf("%d", & m);

  printf("even Numbers from 1 to %d:\n", m);

   do
   {
   
      if (n % 2 == 0) 
      
      printf("%d\n", n);

    n++;
   }
    while (n <= m);
 }

