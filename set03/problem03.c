#include <stdio.h>
int input_number()
{
  int n;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  return 0;
}
int isc(int n)
{
  for(int i=2;i<n;i++)   
    if(n %i == 0)
    return 1;
}
void output(int n, int isc)
{
  if(isc == 0)
    printf("%d is not composite number");
  else
    printf("%d is composite number");
}
int main()
{
  int n, isc;
  n = input_number();
  isc=is_composite(n);
  output(n,isc);
  return 0;
}