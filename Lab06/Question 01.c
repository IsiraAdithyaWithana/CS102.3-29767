#include <stdio.h>
#include <math.h>
int main()
{
    float a,ans;
    for(a=1;a<=100;a++)
    {
        ans=sqrt(a);
        printf("The square root of %.1f is %.2f\n",a,ans);
    }
}
