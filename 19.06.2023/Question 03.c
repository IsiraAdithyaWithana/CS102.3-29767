#include <stdio.h>
int main()
{
    //Question 03
    int no1,co=1,fa=1;

    printf("Enter a number to calculate the factorial\n");
    scanf("%d",&no1);

    if(no1==0)
    {
        printf("The Factorial value is 1");
    }
    else if(no1<0)
    {
        printf("Please use a positive number");
    }
    else
    {
        while(co<=no1)
        {
            fa=fa*co;
            co++;
        }
        printf("The Factorial value is %d",fa);
    }
}
