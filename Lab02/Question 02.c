#include <stdio.h>
int main()
{
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
}
