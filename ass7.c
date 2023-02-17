
//Write a c program to print nth multiplication table.
#include <stdio.h>

void main()
{
  int n,i=1;
  printf("enter n value:");
  scanf("%d",&n);
  while(i<=10)
  {
    printf("%d x %d = %d\n",n,i,(n*i));
    i++;
  }
}

/*Write a c program to print all those numbers 
from 1 upto n which are divisible by k and 
also print evensum and oddsum from those divisible.*/

#include<stdio.h>

void main()
{
  int n,k,i=1,sum=0,sum1=0;
  printf("enter the range:");
  scanf("%d",&n);
  printf("enter the value of multiple:");
  scanf("%d",&k);
  while(i<=n)
  {
    if(i%k==0)
    {
    printf("%d\t",i);
    if(i%2==0)
    sum+=i;
    if(i%2!=0)
    sum1+=i;
    }
    i++;
  }
  printf("\nsum of even numbers is %d",sum);
  printf("\nsum of odd numbers is %d",sum1);
}
  
//Write a c program to print factorial of n.

#include<stdio.h>

void main()
{
  int n,i=1,m=1;
  printf("enter n value:");
  scanf("%d",&n);
  while(i<=n)
  {
    m*=i;
    i++;
  }
  printf("the factorial of %d is %d",n,m);
}
