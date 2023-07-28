#include <stdio.h>
int main()
{
    //Question 04
    float ra;

    printf("Enter the radius \n");
    scanf("%f",&ra);

    printf("The Diameter is %f\n",ra*2);
    printf("The Circumference is %f\n",2*3.14159*ra);
    printf("The Area is %f\n\n\n",3.14159*ra*ra);
}
