#include <stdio.h>
void input(int *a,int *b,int *c)
{
  printf("Enter three numbers\n");
  scanf("%d%d%d",a,b,c);
}

int find_largest(int a,int b, int c)
{
  if(a > b && a > b && a >c){
    return a;
  }
  else if(b > a && b > c){
    return b;
  }
  else{
    return c;
  }
}
int main()
{
  int x,y,z,largest;
  input(&x,&y,&z);
  largest= find_largest(x,y,z);
  printf("The largest from %d,%d and %d is %d",x,y,z,largest);
  return 0;
}