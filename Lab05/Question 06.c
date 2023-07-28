#include <stdio.h>
int main()
{
    //Question 06
    char x;

    printf("Enter a Character among these: A,B,C,a,b,c,0,1,2,$,*,+,/\n");
    scanf(" %c",&x);

    switch(x)
    {
        case 'A':printf("The ASCII code of A is 65");break;
        case 'B':printf("The ASCII code of B is 66");break;
        case 'C':printf("The ASCII code of C is 67");break;
        case 'a':printf("The ASCII code of a is 97");break;
        case 'b':printf("The ASCII code of b is 98");break;
        case 'c':printf("The ASCII code of c is 99");break;
        case '0':printf("The ASCII code of 0 is 48");break;
        case '1':printf("The ASCII code of 1 is 49");break;
        case '2':printf("The ASCII code of 2 is 50");break;
        case '$':printf("The ASCII code of $ is 36");break;
        case '*':printf("The ASCII code of * is 42");break;
        case '+':printf("The ASCII code of + is 43");break;
        case '/':printf("The ASCII code of / is 47");break;
        default:printf("Please type a value given");
    }
}

