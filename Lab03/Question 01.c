#include <stdio.h>
int main()
{
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
}
