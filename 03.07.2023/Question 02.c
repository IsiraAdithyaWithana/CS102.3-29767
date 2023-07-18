#include <stdio.h>
int main()
{
    //Question 02
    int no1,no2,no3,max1,min1;

    printf("Enter three numbers to find Max and Min\n");
    scanf("%d %d %d",&no1,&no2,&no3);

    max1=no1;
    min1=no1;

    if(max1<no2)
        max1=no2;
    if(max1<no3)
        max1=no3;

    if(min1>no2)
        min1=no2;
    if(min1>no3)
        min1=no3;

    printf("The highest value is %d\n",max1);
    printf("The minimum value is %d\n\n\n",min1);
}
