#include <stdio.h>
//no return type, no parameters
void display()//called function
{
    int x;
    for(x=1;x<=5;x++)
        printf("%d ",x);
}
int main()
{
    //calling the function
    display();
    display();
}

//example 2
void name()
{
    char a[30];
    printf("Enter your name\n");
    scanf("%s",&a);
    printf("Your name is %s\n",a);
}

void age()
{
    int b;
    printf("Enter your birth year\n");
    scanf("%d",&b);
    printf("Your age is %d\n",2023-b);
}

int main()
{
    //calling name
    name();
    //calling age
    age();
}


//functions with parameters

void sum(int c,int d)
{
    int sum;
    sum=c+d;
    printf("The total is %d",sum);
}
int main()
{
    sum(23,54);
}


//Question 03
void highest(int e,int f)
{
    if(e>f)
    {
        printf("The highest number is %d",e);
    }
    else
    {
        printf("The highest number is %d",f);
    }
}
int main()
{
    int p,o;
    printf("Enter two numbers to find maximum number\n");
    scanf("%d %d",&p,&o);
    highest(p,o);
}

//with return type, no parameters
//example
int findsum()
{
    int t,r,total1;
    printf("Enter two numbers ");
    scanf("%d %d",&t,&r);
    total1=t+r;
    return total1;
}
int main()
{
    // a function with return type returns a value
    printf("The sum is %d"findsum();)
}


//Question 04
int high()
{
    int g,h,max;
    printf("Enter two numbers to find maximum number\n");
    scanf("%d %d",&g,&h);
    if(g>h)
        max=g;
    else
        max=h;
    return max;
}

int main()
{
    printf("The maximum number is %d",high());
}

//with return type, with parameters
//example
int summ(int s,int d)
{
    int sum;
    sum=s+d;
    return sum;
}
int main()
{
    int ll,kk;
    printf("Enter two numbers to find sum\n");
    scanf("%d %d",&ll,&kk);
    printf("The sum is %d\n",summ(ll,kk));
}
