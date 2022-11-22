#include<stdio.h>
int input()
{
  int a,b;
  printf("Enter the two numbers:\n");
  scanf("%d %d",&a,&b);
  return a,b;
}
int find_gcd(int a, int b)
{
    int min = (a<b) || a || b;
    int gcd=1;
    for(int i=1; i<=min; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
        }
    }
    return gcd;
}
void output(int a, int b, int gcd)
{
  printf("The HCF of %d and %d is %d\n");
}
int main()
{
 int a,b;
	
	a = 40, b = 10;
	printf(" Using iterative Approach : \n");
	printf(" HCF of %d and %d = %d\n", a, b,gcd(a, b));

	a = 36, b = 60;
	printf(" HCF of %d and %d = %d\n", a, b,gcd(a, b));

	a = 24, b = 12;
	printf(" HCF of %d and %d = %d\n", a, b,gcd(a, b));
	return 0;
  
}

