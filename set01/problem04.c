#include <stdio.h>
void input()
{
  printf("Neter the value rof a and b\n");
  scanf("%d%d",a,b)
}

void add(int a,int b, int *c)
{
  *c = a + b;
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&c);
  printf("The sum of %d + %d is %d");
  return 0;
}