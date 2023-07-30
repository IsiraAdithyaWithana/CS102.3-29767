#include <stdio.h>
int main()
{
    //Question 01
    int x=10;
    do
    {
        printf("%d ",x);
        x=x+10;
    }while(x<=1000);
    printf("\n\n");


    //Question 02
    int y=100;
    do
    {
        printf("%d ",y);
        y=y-2;  //y-=2
    }while(y>=2);
    printf("\n\n");

    //Question 03
    int z;
    for(z=1;z<=100;z++)
    {
        printf("%d ",z);
    }
    printf("\n\n");


    //Question 04
    int a;
    for(a=10;a<=1000;a=a+10)
    {
        printf("%d ",a);
    }
}
