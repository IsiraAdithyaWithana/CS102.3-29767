#include <stdio.h>
int main()
{
    //Section A
    //Question 01 (Method 01)
    int x=0;
    while(x<=100)
    {
        printf("%d ",x);
        x++;
    }
    printf("\n\n");

    //Question 01 (Method 02)
    int y=0;
    do
    {
        printf("%d ",y);
        y++;
    }
    while(y<=100);
    printf("\n\n");

    //Question 01 (Method 03)
    int z=0;
    for(;z<=100;z++)
    {
        printf("%d ",z);
    }
    printf("\n\n");




    //Question 02
    int a,c=0,tot=0;
    float avg;
    printf("Enter your marks\n");

    for(;c<=10;c++)
    {
        scanf("%d",&a);
        tot+=a;
    }
    avg=(float)tot/10;

    if(avg<50)
    {
        printf("Frail!");
    }
    else
    {
        printf("Pass!");
    }
    printf("\n\n");




    //Question 03
    int b,fac=1,i;

    printf("Enter a number to find the factorial value\n");
    scanf("%d",&b);

    if(b<0)
    {
        while(b<0)
        {
            printf("Please enter positive value or zero\n");
            scanf("%d",&b);
        }
    }

    if(b==0)
    {
        printf("The factorial value is 1\n");
    }
    else
    {
        for(i=1;i<=b;i++)
        {
            fac*=i;
        }
        printf("The factorial value is %d\n",fac);
    }
    printf("\n\n");




    //Question 04
    int p,q=0,total=0;
    printf("Enter a positive integer to find the sum of all the digits\n");
    scanf("%d",&p);

    if(p<0)
    {
        while(p<0)
        {
            printf("Please enter positive integer\n");
            scanf("%d",&p);
        }
    }

    while(p>0)
    {
        q=p%10;
        total+=q;
        p/=10;
    }
    printf("The sum of all the digits is %d",total);
    printf("\n\n");




    //Question 05
    int e,r,coun=0,w,o=1,total1=0,wo;
    printf("Enter a positive number to reverse all the digits\n");
    scanf("%d",&e);

    if(e<0)
    {
        while(e<0)
        {
            printf("Please enter positive integer\n");
            scanf("%d",&e);
        }
    }

    //counting how many digit have in the number
    if(e==0)
    {
        coun=1;
    }

    r=e;
    do
    {
        coun++;
        r/=10;
    }
    while(r>0);


    do
    {
        wo=coun;
        w=e%10;
        o=1;
        if(wo>1)
        {
            do
            {
                o=o*10;
                wo--;
            }
            while(wo>1);
        }
        coun--;
        w*=o;
        total1=total1+w;
        e/=10;
    }
    while(e>0);
    printf("The reverse order is %d",total1);
    /*
    please consider that, this is for my use
    the above program is too advanced.
    therefore we can also follow this method.

    int x,y,z;
    printf("Enter a number");
    scanf("%d",&x);

    do
    {
        y=x%10;
        z=z*10+y;
        x/=10;
    }
    while(x>0);
    printf("The reverse order is %d",z);
    */
    printf("\n\n");




    //Question 06
    int ab,ac,se=1;
    printf("Enter a value\n");
    scanf("%d",&ab);
    printf("Now enter the power of it\n");
    scanf("%d",&ac);

    if(ac==0)
    {
        se=1;
    }
    else
    {
        for(;ac>0;ac--)
        {
            se=se*ab;
        }
    }
    printf("The answer is %d",se);
    printf("\n\n");




    //Question 07
    int sd=0,count2=2,xy=1,in=0;
    printf("These are the first 10 numbers of Fibonacci Sequence\n");

    printf("0 1 ");
    for(;count2<=10;count2++)
    {
        in=sd+xy;
        printf("%d ",in);
        xy=in;
        sd=xy-sd;
    }
    printf("\n\n");




    //Question 08
    int gh,hj=0,et=0,count5=0,et3=0,total3=0,nh=1,count6=0,ls=0;
    printf("Enter a number to find the given number is an Armstrong Number or not\n");
    scanf("%d",&gh);
    hj=gh;
    ls=gh;

    for(;hj>0;hj/=10)
    {
        et=hj%10;
        count5+=1;
    }

    for(;gh>0;gh/=10)
    {
        et3=gh%10;
        if(count5==0)
        {
            nh=1;
        }
        else
        {
            count6=count5;
            nh=1;
            for(;count6>0;count6--)
            {
                nh=nh*et3;
            }
        }
        total3+=nh;
    }

    if(total3==ls)
    {
        printf("This is an Armstrong Number");
    }
    else
    {
        printf("This is not an Armstrong Number");
    }
    printf("\n\n");




    //Question 09
    int hi;
    printf("These are the ASCII values from A to Z. \n");
    for(hi=65;hi<=90;hi++)
    {
        printf("%d ",hi);
    }
    printf("\n\n");




    //Question 10
    int ex,way;
    for(ex=0;ex<=5;ex++)
    {
        for(way=ex;way>0;way--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");




    //Question 11
    int je,ee=0,kee=0,count9=0;
    printf("Enter a number to find the number is a prime or not\n");
    scanf("%d",&je);

    kee=je;
    for(;kee>0;kee--)
    {
        ee=je%kee;
        if(ee==0)
        {
            count9+=1;
        }
    }

    if(count9==2)
    {
        printf("This is a prime number.");
    }
    else
    {
        printf("This is not a prime number");
    }
    printf("\n\n");




    //Question first 12
    int tu,uu=0,kuu=0;
    printf("Enter a number to find the number is a prime or not\n");
    scanf("%d",&tu);

    kuu=tu;
    for(;kuu>0;kuu--)
    {
        uu=tu%kuu;
        if(uu==0)
        {
            printf("%d ",kuu);
        }
    }
    printf("\n\n");




    //Question second 12
    int dee,sum8=0,ala;
    printf("Enter numbers to find the sum, and enter -1 to stop\n");
    scanf("%d",&dee);
    if(dee==-1)
    {
        printf("The sum is %d",dee);
    }
    else
    {
        for(ala=0;ala==0;)
        {
            sum8+=dee;
            scanf("%d",&dee);
            if(dee==-1)
            {
                ala=1;
            }
        }
        printf("The sum is %d",sum8);
    }
    printf("\n\n");




    //Question 13 not done yet
    //Question 14 not done yet


    //Section B
    //Question 01
    int dop,count23,neg=0,pos=0,zero=0;
    printf("Enter 10 numbers to find Negatives, Positives and Zeroes\n");
    for(count23=0;count23<10;count23++)
    {
        scanf("%d",&dop);
        if(dop==0)
        {
            zero++;
        }
        else if(dop<0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }
    printf("There are %d positive numbers, %d negative numbers and %d zeroes.",pos,neg,zero);
    printf("\n\n");




    //Question 02
    int mark,count56,maxi,minim,tot32=0;
    float aver;
    printf("Enter the marks\n");
    scanf("%d",&mark);

    maxi=mark;
    minim=mark;
    for(count56=0;count56<9;count56++)
    {
        scanf("%d",&mark);
        tot32+=mark;
        if(maxi<mark)
        {
            maxi=mark;
        }

        if(minim>mark)
        {
            minim=mark;
        }
    }
    aver=(float)tot32/10;

    printf("The maximum number is %d\n",maxi);
    printf("The minimum number is %d\n",minim);
    printf("The average is %f",aver);
    printf("\n\n");




    //Question 03
    int ope,countu,uun=0,sum0=0;
    float avar;
    printf("Enter items prices\n");
    for(countu=0;countu<10;countu++)
    {
        scanf("%d",&ope);
        sum0+=ope;
        if(ope>200)
        {
            uun++;
        }
    }
    avar=(float)sum0/10;
    printf("The average value is %f\n",avar);
    printf("The number of items which greater than 200 is %d",uun);
    printf("\n\n");




    //Question 04
    int empno,emps,eex,cou8=0;
    printf("Enter the employee number and salary\n");
    for(eex=0;eex==0;)
    {
        scanf("%d %d",&empno,&emps);
        if(empno==-999)
        {
            eex=1;
        }

        if(emps>=5000)
        {
            cou8++;
        }
    }
    printf("The number of employees whose Basic Salary >=5000 is %d",cou8);
    printf("\n\n");




    //Question 05
    int empnu,workh,jjk,over,countt=0,counttt=0,per=0;
    printf("Enter your employee number and over time hours worked\n");
    for(jjk=0;jjk==0;)
    {
        scanf("%d %d",&empnu,&workh);
        if(empnu==-999)
        {
            jjk=1;
        }

        if(workh<=40)
        {
            over=workh*150;
        }
        else
        {
            over=workh*200;
        }

        if(over>=4000)
        {
            counttt++;
        }
        countt++;
        printf("Employee no: %d\n",empnu);
        printf("Over time payment: %d\n\n",over);
    }
    per=((float)counttt/countt)*100;
    printf("The percentage of employees whose Over Time Payment exceeding the Rs. 4000/- is %d%%",per);
}
