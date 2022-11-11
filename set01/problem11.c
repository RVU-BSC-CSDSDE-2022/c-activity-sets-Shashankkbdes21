#include <stdio.h>
struct Complex {
float real;
float imaginary;
};
typedef struct Complex Complex;
Complex input()
{
  complex a;
  printf("Enter the real and imaginary part of the Complex number:")
    scanf("%f%f",&a.real,&a.imaginary);
  return a;
}
Complex add(Complex a,Complex b)
{
  Complex c;
  c.real = a.real + a.imaginary;
  return c;
}
void output(Complex a,Complex b,Complex c)
{
  printf("The sum of %f+i+f and %f+i%f is %f+i%f\n"a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex a,b,c;
  a=input();
  b=input();
  c=add(a,b);
  output(a,b,c);
  return 0;
}