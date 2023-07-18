#include <stdio.h>
int main()
{
    //Question 03
    int bs,ns,inc;
    char name[15];
    printf("Input Employee name and Basic salary \n");
    scanf("%s %d",&name,&bs);

    if(bs<5000)
    inc=bs*5/100;
    else if(bs<10000)
        inc=bs*10/100;
    else
        inc=bs*15/100;

    ns=bs+inc;
    printf("Employee name :- %s \n",name);
    printf("Your new salary :- %d \n\n\n",ns);
}
