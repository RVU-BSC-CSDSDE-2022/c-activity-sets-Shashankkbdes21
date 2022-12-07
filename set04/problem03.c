#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the value of n\n");
  scanf("%d", &n);
  return n;
}
int is_prime(int n)
{
  int i=1, count=0;
for(int i=1; i <= n; i++)
  {
    if(n%i==0)
      count++;
  }
  printf("count is %d\n", count);
  return count;
}
void output(int n, int result)
{
  if(result>2)
    printf("%d is not  a prime number\n",n);
    
  else
    printf("%d is a prime number\n",n);  
}
int main()
{
  int n, result;
  n=input_number();
  result =is_prime(n);
  output(n, result);
  return 0;
}