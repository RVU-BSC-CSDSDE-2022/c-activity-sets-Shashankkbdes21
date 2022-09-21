#include <stdio.h>

int input_array_size()
{  int n;
  printf("Enter the size of the array");
  scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n])
{
  
  for(int i=0;i<n;i++)
    { printf("Enter the elements of the array\n");
    scanf("%d",&a[i]);}
}
int sum_n_array(int n, int a[n])
{ int sum=0;
  for(int i=0;i<n;i++)
    { sum = sum + a[i];}
     return sum;
}
void output(int n, int a[n],int sum)
{
  printf("The sum of the elements of the array of size %d is %d\n",n,sum);
 // for(int i=0;i<=n;i++)
  //  { printf("%d",a[i]);}
  }

int main()
{ int c;
  int a[c];
  int sum;
  c = input_array_size ();
	input_array(c,a);
   sum = sum_n_array(c,a);
	output(c,a,sum);
	return 0;
}