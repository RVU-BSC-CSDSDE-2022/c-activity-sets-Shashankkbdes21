#include<string.h>
#include<stdio.h>


void input_two_strings(char *string1[20], char *string2[20])
{
  printf("Enter a first string :");
scanf("%s",string1);
printf("Enter a second string :");
scanf("%s",string2);
}

int stringcompare(char *string1, char *string2)
{
  
  for(int i=0; i<strlen(string1); i++)
    {
      if(string1[i] == string2[i])
      {
        return 1;
      }
      else if(string1[i] > string2[i])
      {
        return -1;
    }
  return 0;
}
int main()
{
  int a;
  char s1[20], s2[20];
  input_two_strings(&s1 ,&s2);
  a = stringcompare(&s1,&s2);
  printf("The result is %d\n",a);
  return 0;
}