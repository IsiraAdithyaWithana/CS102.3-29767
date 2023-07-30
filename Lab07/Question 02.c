#include <stdio.h>
int main()
{
    /*
  int counter,no,sum;
  float avg;

  counter=1;
  sum=0;

  while(counter<=10)
  {
      printf("Enter a number ");
      scanf("%d",&no);

      sum=sum+no;

      counter++;

  }

  avg=(float)sum/10;

  printf("The average is %f",avg);
  */

  int count,sump,sumn,sumz,num;
  count=1;
  sump=0;
  sumz=0;
  sumn=0;

  while(count<=10)
  {
      printf("Enter a number ");
      scanf("%d",&num);

      if(num==0)
      {
          sumz=sumz+1;
      }
      else if(num>0)
      {
          sump=sump+1;
      }
      else
      {
          sumn=sumn+1;
      }
      count=count+1;
  }

  printf("There are %d Positive numbers, %d Negative numbers and %d Zeroes",sump,sumn,sumz);

}
