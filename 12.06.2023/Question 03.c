#include <stdio.h>
int main()
{
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
