#include <stdio.h>
int input_array_size()
{  int n;
  printf("Enter the numbers of variables you wish to find the sum of:");
  scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
  { printf("Enter the %d numbers you wish to find the sum of:",n);
    scanf("%d",&a[i]);
  }
}
int sum_n_array(int n, int a[n])
{ int sum=0;
  for(int i=0;i<n;i++)
    { sum = sum + a[i];}
     return sum;
}
void output(int n, int a[n],int sum)
{
  for(int i=0;i<n;i++)
 { 
  printf("%d+",a[i]);}
  printf("is equal to %d", sum);
  }

int main()
{ int c;
 
  int sum;
  c = input_array_size ();
  int a[c];
	input_array(c,a);
   sum = sum_n_array(c,a);
	output(c,a,sum);
	return 0;
}