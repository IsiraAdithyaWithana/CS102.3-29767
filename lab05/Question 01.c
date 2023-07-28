#include <stdio.h>
int main()
{
    //Question 01
    int n1,n2,max;

    printf("Enter two values to find the max \n");
    scanf("%d %d",&n1,&n2);

    if(n1>n2)
        printf("The highest number is %d \n",n1);
    else
        printf("The highest number is %d \n\n\n",n2);
}
