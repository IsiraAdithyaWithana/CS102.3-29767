#include <stdio.h>
int main()
{
    //Question 01 (part 1)
    int no1,eo;

    printf("Enter an integer\n");
    scanf("%d",&no1);

    eo=no1%2;

    if (eo==0)
    {
        printf("The entered value is an even number");
    }
    else if (no1==0)
    {
        printf("This is zero");
    }
    else
    {
        printf("The entered number is an odd number");
    }
    printf("\n\n");


    //Question 01 (part 2)
    int no2,eo2;
    printf("Enter an integer\n");
    scanf("%d",&no2);

    eo2=no2%2;
    if(no2==0)
    {
        printf("This is zero");
    }
    else
    {
        switch(eo2)
        {
            case 0:printf("The entered value is an even number");break;
            default:printf("The entered value is an odd number");
        }
    }
    printf("\n\n");


    //Question 02
    int no3,no4;
    char s;
    float ans;

    printf("Please use integer values for following calculations\n");
    printf("Enter your first number\n");
    scanf("%d",&no3);
    printf("\n\n");
    printf("Enter the mathematical symbol that you want to apply\n");
    scanf(" %c",&s);//there should be a space before " %c" for assign the value to "s"
    printf("\n\n");
    printf("Enter the second number\n");
    scanf("%d",&no4);
    printf("\n\n");

    switch(s)
    {
        case '+':ans=(float)no3+(float)no4;break;
        case '-':ans=(float)no3-(float)no4;break;
        case '*':ans=(float)no3*(float)no4;break;
        case '/':ans=(float)no3/(float)no4;break;
    }

    printf("The answer is %f",ans);
    printf("\n\n");


    //Question 03
    int r;
    double circ,arear,vol;
    char l;

    printf("Type what you want from following\n\n");

    printf("If you want the circumference of a circle, type 'c' \n");
    printf("If you want the area of a circle, type 'a' \n");
    printf("If you want the volume of a sphere, type 'v' \n");

    scanf(" %c",&l);//using a space before %c

    printf("\n");

    printf("Now enter the radius(use integers)\n");
    scanf("%d",&r);
    printf("\n\n");

    circ=2*3.14*(double)r;
    arear=3.14*(double)r*(double)r;
    vol=(4/3)*3.14*(double)r*(double)r*(double)r;

    switch(l)
    {
        case 'c':printf("The circumference is %fl",circ);break;
        case 'a':printf("The area is %fl",arear);break;
        case 'v':printf("The volume is %fl",vol);break;
        default:printf("Please enter only the given values");
    }

}
