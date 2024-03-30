# include <conio.h>
# include <stdio.h>

main()
{

    int p, r, t, i;
 clrscr();
    printf("Enter the value of p: "); //p=principal
    scanf("%d", &p);

    printf("Enter the r: "); //r=rate
    scanf("%d", &r);

    printf("Enter the t: "); //t=time
    scanf("%d", &t);

    i = p * r * t / 100; //interest = principal * rate * time / 100
    printf("value of Simple interest is:  %d", i);

    getch();

}
