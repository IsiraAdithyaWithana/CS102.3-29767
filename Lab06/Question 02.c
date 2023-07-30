#include <stdio.h>
int main()
{
    int num[3][4],a,b;

    for(a=0;a<3;a++)
    {
        for(b=0;b<4;b++)
        {
            printf("Input [%d],[%d] place value - ",a,b);
            scanf("%d",&num[a][b]);
        }
    }
    printf("\n");

    //output
    //method 01
    for(a=0;a<3;a++)
    {
        for(b=0;b<4;b++)
        {
            printf("[%d],[%d] value is - %d\n",a,b,num[a][b]);
        }
    }
    printf("\n");

    //method 02
    printf("The values are :\n");
    for(a=0;a<3;a++)
    {
        for(b=0;b<4;b++)
        {
            printf("%d ",num[a][b]);
        }
        printf("\n");
    }


    int x[3][3],y[3][3],z[3][3],a,b;


    printf("Input numbers to the given scenario\n");
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            printf("Input place value of [%d],[%d] - ",a,b);
            scanf("%d",&x[a][b]);
        }
    }
    printf("\nInput numbers what you want to add to 1st array\n");

    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            printf("Input place value of [%d],[%d] - ",a,b);
            scanf("%d",&y[a][b]);
        }
    }
    printf("\nThe sum of above both arrays :\n")

    //process
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            z[a][b]=x[a][b]+y[a][b];
            printf("%d ",z[a][b]);
        }
        printf("\n");
    }
}
