#include <stdio.h>
int main()
{
    //Question 05
    int nu1,nu2,nu;

    printf("Enter two integers\n");
    scanf("%d %d",&nu1,&nu2);

    nu=nu1%nu2;

    if(nu==0)
    {
        printf("%d is a multiple of %d",nu1,nu2);
    }
    else
    {
        printf("%d is not a multiple of %d",nu1,nu2);
    }
    printf("\n\n");
}
