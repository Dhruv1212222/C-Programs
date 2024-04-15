#include <stdio.h>  

int main ()  
{  
    char a[30]; 
    int i;  
    
       printf (" Enter the string: ");  
       scanf (" %s", &a);  
       
   for ( i = 0; i <=strlen(a); i++)  
 {  
 
   if (a[i] >= 97 && a[i] <= 122)  
   a[i] = a[i] - 32;
 }  
       printf (" \n Upper Case to Lower case string is: %s", a);  
    return 0;
}


