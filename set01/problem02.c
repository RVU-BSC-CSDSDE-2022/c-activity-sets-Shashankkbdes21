#include <stdio.h>
int main(void)
{
  int a,b,c;
  printf("Enter the value of a and b\n");
  scanf("%d%d",&a,&b);
  c = a + b;
  printf("The sum of %d and %d is %d\n",a,b,c);
  return 0;
}