#include<string.h>
#include<stdio.h>


void input_two_strings(char *string1[20], char *string2[20])
{
  printf("Enter a first string :");
scanf("%s",char *string1);
printf("Enter a second string :");
scanf("%s",char *string2);
}

int stringcompare(char *string1, char *string2)
{
  
  for(int i=0; i<strlen(string1); i++)
    {
      if(string1[i] == string2[i])
      {
        return 1;
      }
      if(string1[i] > string2[i])
      {
        return -1;
      }
    }
  return 0;
}