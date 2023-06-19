#include <stdio.h>
int main()
{

    //Selection & Loops
    //Part A
    //Question 05
    int mo;

    printf("Enter a month number\n");
    scanf("%d",&mo);
    printf("\n");

    switch(mo)
    {
        case 1:printf("January - 31 Days");break;
        case 2:printf("February - 28 Days");break;
        case 3:printf("March - 31 Days");break;
        case 4:printf("April - 30 Days");break;
        case 5:printf("May - 31 Days");break;
        case 6:printf("June - 30 Days");break;
        case 7:printf("July - 31 Days");break;
        case 8:printf("August - 31 Days");break;
        case 9:printf("September - 30 Days");break;
        case 10:printf("October - 31 Days");break;
        case 11:printf("November - 30 Days");break;
        case 12:printf("December - 31 Days");break;
        default:printf("This is not a valid month number");
        /*
        case 1:
        case 2:
        case 3:
        printf("ghsdfjka");break;   //we can also use this method
        */
    }
    printf("\n\n");



    //Part B
    //Question 01 (Method 01)
    int x=0;
    while(x<=100)
    {
        printf("%d ",x);
        x++;
    }
    printf("\n\n");


    //Question 01 (Method 02)
    int y=0;
    do
    {
        printf("%d ",y);
        y++;
    }
    while(y<=100);
    printf("\n\n");



    //Question 01 (Method 03)
    int z;
    for(z=0;z<=100;z++)
    {
        printf("%d ",z);
    }
    printf("\n\n");


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
