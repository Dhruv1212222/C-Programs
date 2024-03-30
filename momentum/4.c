#include<stdio.h>
 main()
{
    char n;
    printf("press M for monday\n");
    printf("press T for Tuesday\n");
    printf("press W for Wednesday\n");
    printf("press t for thursday\n");
    printf("press F for friday\n");
    printf("press s for saturday\n");
    printf("press S for sunday\n");

     printf("\nenter character: ");
    scanf("%c",&n);

    switch (n)
    {
    case 'M':
    printf("It's monday");
        break;
        
        case 'T':
    printf("It's Tuesday");
        break;
        
        case 'W':
    printf("It's Wednesday");
        break;
        
        case 't':
    printf("It's thursday");
        break;
        
        case 'F':
    printf("It's friday");
        break;
        
        case 's':
    printf("It's saturday");
        break;
    
     case 'S':
    printf("It's sunday");
        break;
        
    default:
    printf("INVALID CHARACTER");
        break;
    }
    return 0;
}
