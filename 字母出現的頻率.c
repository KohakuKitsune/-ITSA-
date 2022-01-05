#include<stdio.h>
#include<stdlib.h>

#define TotAlpha 26 //total number of alphabets A to Z

int main()
{
  int AlphaCnt[TotAlpha]={0};
  char c;
  
  while((c=(getchar()))!=EOF)  //read input one character at a time till the end of input.
  {
    if(c >= 'a' && c <= 'z') AlphaCnt[c-'a'] +=1;      //count lowercasae alphabets 
    else if(c >= 'A' && c <= 'Z') AlphaCnt[c-'A'] +=1; //count uppercase alphabets
  }
    
  for(int i = 0; i < TotAlpha; i++)  //print out the results
    {
      if(i < TotAlpha-1)printf("%d ",AlphaCnt[i]); 
      else printf("%d\n",AlphaCnt[i]);
    }
  return 0;
}