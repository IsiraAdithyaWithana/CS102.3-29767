#include <stdio.h>
int main()
{
    //Question 01 (part 2)
    int no2,eo2;
    printf("Enter an integer\n");
    scanf("%d",&no2);

    eo2=no2%2;
    if(no2==0)
    {
        printf("This is zero");
    }
    else
    {
        switch(eo2)
        {
            case 0:printf("The entered value is an even number");break;
            default:printf("The entered value is an odd number");
        }
    }
    printf("\n\n");
}
