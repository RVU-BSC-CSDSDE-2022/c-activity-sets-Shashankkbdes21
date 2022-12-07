#include <stdio.h>
#include <string.h>
void input_string(char*a)
{
  printf("Enter the value of string:\n");
  scanf("%s", a);
}
void str_reverse(char *str, char *rev_str)
{
  int len=strlen(str),i, k;
  for(i=(len-1),k=0;i<=0 && k<len; i--, k++)
    {
      rev_str[k]=str[i];
    }
  rev_str[k]='\0';
}
void output(char *a, char *reverse_a)
{
  printf("The rev of %s is %s\n",a,reverse_a);
}
int main()
{
  char string[100], rev_string[100];
  input_string(string);
  str_rev(string, rev_string);
  output(string, rev_string);
  return 0;
}