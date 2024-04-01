#include <stdio.h>
#include <conio.h>
 main() 
{
    int i,n,count=0;

    printf("enter any number:");
    scanf("%d",&n);
    
    for(i=0;n!=0;count++)
    {
        n=n/10;
    }
    printf("total digit= %d",count);
     
}
