#include <stdio.h>
int main()
{
    //Question 04
    int no,x,sum=0;

    printf("Enter number to calculate the sum of all digits\n");
    scanf("%d",&no);

    while(no>0)
    {
        x=no%10;
        sum=sum+x;
        no=no/10;
    }
    printf("The sum of all digits are %d",sum);
    printf("\n\n");
}
