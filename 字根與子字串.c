#include<stdio.h>

#define YES 1
#define NO 0

int Strlen(char *str);          //calculate the length of string
void Strstr(char *s, char *t);  //determine if s is a substring of t

int main()
{
  char s[100];
  char t[100];
  
  scanf("%s",s);  //read pattern string
  scanf("%s",t);  //read test string
  
  Strstr(s,t);
  
  return 0;
}

int Strlen(char *str)
{
  int Len = 0;
  char *ptr = str; 
  while(*ptr)    //repeat until the end of content string
  {
    Len +=1;
    ptr++;
    if(*ptr == '\n') Len -=1;  //prevent "\n" being counted as a character
  }
  return Len;
}

void Strstr(char *s, char *t)
{
  char *ptr = t;
  int S_Len = Strlen(s);  //calculate the length of pattern string
  int result = NO;
  
  while(*ptr)    //repeat until the end of content t
  {
    if(*ptr == *s)
    {
      for(int i = 0; i < S_Len; i++)  //repeat until all characters of pattern string are being compared
      {
        if(*ptr != *(s+i)) break;     //if there is a mismatch then terminate the for loop
        else 
        {
            if(i == S_Len -1) result = YES;  //if there is a complete pattern of s in t 
            ptr++;
        }
      }
    }
    if(result == YES)    //if s proven to be  a substring of t
    {
      printf("YES\n");
      return;
    }
    ptr++;
  }
  printf("NO\n");
}
