#include <stdio.h>
void input(int *a,int *b,int *c)
{
  printf("Enter 3 numbers\n");
  scanf("%d %d %d",a,b,c);
}
int largest(int a,int b,int c)
{
  if(a>b && a>c){
    return a;
    }
  else if(b>a && b>c){
    return b;
    }
  else{
    return c;
  }
}
int main()
{
  int e,f,g,h;
  input(&e,&f,&g);
  h = largest(e,f,g);
    printf("largest number among %d,%d and %d is %d\n",e,f,g,h);
  return 0;
}