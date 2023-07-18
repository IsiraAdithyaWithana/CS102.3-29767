#include <stdio.h>
int main()
{

    //Question 01
    int n1,n2,n;

    printf("Enter two integers\n");
    scanf("%d %d",&n1,&n2);

    n=n1%n2;

    if(n==0)
    {
        printf("%d is a multiple of %d",n1,n2);
    }
    else
    {
        printf("%d is not a multiple of %d",n1,n2);
    }
}
