#include<stdio.h>

void Power(int result, int base, int pow);  //power function

int main()
{
  int base,pow,result = 1; //preset result as base^0 = 1
  
  while(scanf("%d %d",&base,&pow) != EOF) Power(result,base,pow);  //keep reading base number and power number until end of input
  
  return 0;
}

void Power(int result, int base, int pow)
{
  if(pow > 0) Power(result*base, base, pow-1);  //if pow > 0 continue multiply result with base
  else printf("%d\n",result);                   //print out the powered result of the base.
}