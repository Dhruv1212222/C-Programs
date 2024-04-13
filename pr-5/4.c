 #include <stdio.h>
 main ()
    {
 
       
        int r, c, i, j, sum = 0;
       	
        	printf("Enter Row : ");
        	scanf("%d",&r);
    	
	        printf("Enter Column : ");
	        scanf("%d",&c);
	    
        int array[10][10];
       
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++) 
            {
                printf("a[%d][%d] : ",i,j);
                scanf("%d", &array[i][j]);
            }
        }
 
        for (i = 0; i < r; i++) 
        {
            for (j = 0; j < c; j++) 
            {
                sum = sum + array[i][j];
            }
 
            printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
 
        }
        sum = 0;
        for (j = 0; j < r; j++) 
        {
            for (i = 0; i < c; i++)
            {
                sum = sum + array[i][j];
            }
 
            printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
 
        }
 
    }
