#include <stdio.h>
struct camel 
{
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
{
  int c;
  printf("Enter the height, radius of stomach and length of the camel\n");
  scanf("%d",&c);
  return c;
}
float find_weight(Camel c);
{
  
}
void output(Camel c);