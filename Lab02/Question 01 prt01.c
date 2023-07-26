#include <stdio.h>
int main()
{
    //Question 01 (part 1)
    int no1,eo;

    printf("Enter an integer\n");
    scanf("%d",&no1);

    eo=no1%2;

    if (eo==0)
    {
        printf("The entered value is an even number");
    }
    else if (no1==0)
    {
        printf("This is zero");
    }
    else
    {
        printf("The entered number is an odd number");
    }
    printf("\n\n");
}
