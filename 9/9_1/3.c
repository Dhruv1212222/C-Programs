#include<stdio.h>

int main()

{
     char a[50];
     int i;

        printf("Enter a String: ");
        scanf("%s",a);

     for (i = 0; a[i]!='\0'; i++)
   {
     if(a[i] >= 'A' && a[i] <= 'Z')

   {
         a[i] = a[i] + 32;
   }
     else if(a[i] >= 'a' && a[i] <= 'z')
   {
        a[i] = a[i] - 32;
   }                      
   }
       printf("Toggoled string is: %s", a);
       
    return 0;
}
