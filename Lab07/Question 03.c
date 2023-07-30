#include <stdio.h>
int main()
{
    //Question 01 (Method 01)
    int x;
    printf("Enter an integer to find even or odd\n");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("This is an even number");
    }
    else
    {
        printf("This is an odd number");
    }
    printf("\n\n");


    //Question 01 (Method 02)
    int y,z;
    printf("Enter an integer to find even or odd\n");
    scanf("%d",&y);

    z=y%2;

    switch(z)
        {
            case 0:printf("This is an even number");break;
            default:printf("This is an odd number");
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
    printf("\n\n");


    //Question 04
    char i;
    printf("Enter a character to find it a vowel or not\n");
    scanf(" %c",&i);

    switch(i)
    {
        case 'a':printf("This is a vowel letter");break;
        case 'e':printf("This is a vowel letter");break;
        case 'i':printf("This is a vowel letter");break;
        case 'o':printf("This is a vowel letter");break;
        case 'u':printf("This is a vowel letter");break;
        case 'A':printf("This is a vowel letter");break;
        case 'E':printf("This is a vowel letter");break;
        case 'I':printf("This is a vowel letter");break;
        case 'O':printf("This is a vowel letter");break;
        case 'U':printf("This is a vowel letter");break;
        default:printf("This is not a vowel letter");
    }
    printf("\n\n");


    //Question 05
    int mo;

    printf("Enter a month number\n");
    scanf("%d",&mo);
    printf("\n");

    switch(mo)
    {
        case 1:printf("January - 31 Days");break;
        case 2:printf("February - 28 Days");break;
        case 3:printf("March - 31 Days");break;
        case 4:printf("April - 30 Days");break;
        case 5:printf("May - 31 Days");break;
        case 6:printf("June - 30 Days");break;
        case 7:printf("July - 31 Days");break;
        case 8:printf("August - 31 Days");break;
        case 9:printf("September - 30 Days");break;
        case 10:printf("October - 31 Days");break;
        case 11:printf("November - 30 Days");break;
        case 12:printf("December - 31 Days");break;
        default:printf("This is not a valid month number");
        /*
        case 1:
        case 2:
        case 3:
        printf("ghsdfjka");break;   //we can also use this method
        */
    }
}
