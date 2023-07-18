#include <stdio.h>
int main()
{
    //Question 02
    int no,cou=0,sum;
    float avg;

    printf("Enter 10 numbers to get the sum and average\n");
    while(cou<10)
    {
        scanf("%d",&no);
        sum=sum+no;
        cou++;
    }
    avg=(float)sum/10;

    printf("The sum is %d\n",sum);
    printf("The average is %f\n",avg);

    if(avg<50)
    {
        printf("Fail");
    }
    else
    {
        printf("Pass");
    }
    printf("\n\n");
}
