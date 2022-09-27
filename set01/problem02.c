#include <stdio.h>
int main(void)
{
  int a,b,c;
  printf("Enter the value of a and b\n");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("The value of %d and %d is %d\n",a,b,c);
  return 0;
}