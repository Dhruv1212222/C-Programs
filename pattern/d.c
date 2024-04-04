#include <stdio.h>
#include <conio.h>

 main()
 {
    int i, j;

   for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
		 {
            if ((i == 0 || i == 4) && j < 4)
                printf("*");
                
            else if ((j == 0 || j == 4) && (i != 0 && i != 4))
                printf("*");
                
            else
                printf(" ");
        }
        printf("\n");
    }
    
    printf("\n");

   for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++) 
		{
            if (j == 0 || j == 4 || (i == 2 && j > 0 && j < 4))
                printf("*");
                
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

   for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
		 {
            if((i == 0 || i == 2) && j < 4)
                printf("*");
                
            else if((i == 1 || i == 3 || i == 4) && (j == 0 || j == 4))
                printf("*");
                
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 5; i++) 
	{
        for (j = 0; j < 5; j++)
		 {
            if ((j == 0 || j == 4) || (i == 4 && j > 0 && j < 4))
			 {
                printf("*");
            }
			 else
			  {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    printf("\n");

    for(i = 0; i < 5; i++) 
	{
        for(j = 0; j < 9; j++) 
		{
            if((i == j || j == 8-i))
                printf("*");
                
            else
                printf(" ");
        }
        printf("\n");
    }
    
}

