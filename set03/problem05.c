#include<stdio.h>
int input()
{
  int n;
  printf("Enter the value of n:\n");
  scanf("%d",&n);
  return n;
}
int find_gcd(int a, int b)
{
  int dividn, div, rem=-1, gcd;
    if(a>b)
    {
      dividn=a;
      div=b;
    }
  else
    {
      dividn=b;
      div=a;
    }
  rem=(dividn)%(div);
  if(rem==0)
    gcd=div;
  else
  {
    while(rem!=0)
      {
        div=rem;
        dividn=div;
        rem=(dividn)%(div);
      }
    gcd=div;
  }
  return gcd;
}
void output(int a, int b, int gcd)
{
  printf("The gcd of %d and %d is %d\n",a,b,gcd);
}
int main()
{
 int a,b,gcd=0;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}

