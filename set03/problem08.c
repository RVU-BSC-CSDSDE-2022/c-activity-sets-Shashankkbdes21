#include <stdio.h>
typedef struct _triangle 
{
	float base, altitude, area;
} Triangle;

int input_n()
{
  int n;
  printf("Enter the number of triangles\n");
  scanf("%d", &n);
  return n;
}

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base of the triangle\n");
  scanf("%f",&t.base);
  printf("Enter the altitude of the triangle\n");
  scanf("%f",&t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0; i<n; i++)
    {
         t[n]=input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5*(t->base)*(t->altitude);
}
void find_n_areas(int n, Triangle t[n])
{
  for(int i=0; i<n ; i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle smallest=t[0];
  for(int i=1; i<n; i++)
    {
      if(t[i].area<smallest.area)
      {
        smallest=t[i];
      }
    }
  return smallest;
}
void output(int n, Triangle t[n], Triangle smallest)
{
  printf("The samllest of the triangles with base and height\n");
  for(int i=0; i<n; i++)
    {
      printf("(%f,%f),",t[i].base, t[i].altitude);
    }
  printf("Is the triangle with base %f, altitude %f and area %f", smallest.base, smallest.altitude, smallest.area);
}
int main()
{
  int n;
  n = input_n();
  Triangle T[n], smallest;
  input_n_triangles(n, T);
  find_n_areas(n, T);
  smallest=find_smallest_triangle(n, T);
  output(n, T, smallest);
  return 0;
}