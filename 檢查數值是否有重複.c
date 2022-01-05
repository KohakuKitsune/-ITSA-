#include<stdio.h>
#include<stdlib.h>

#define NoRep 1
#define Rep   0
int main()
{
  int N,i,Status = NoRep;
  char *Arr;
  scanf("%d",&N);
  if(N>=1 && N<=128)
  {
    if(N % 8 > 0) Arr = (char*) malloc (sizeof(char) *  ((N/8)+1) );
    else Arr = (char*) malloc (sizeof(char) * (N/8));
  
    for(i = 0 ; i < N ; i++)
    {
      *(Arr+i) = 0; //Set all bits in memory to 0
    }
  
    Status = NoRep;
    i = 0;
    while (scanf("%d",&N)!=EOF)  //read integers with value between 0~N until end of input
    {
      if(i < 128)
      {
        if( ( *(Arr + (N / 8) ) & ( 1 << ( N % 8 )) ) == 0) //If the position accoriding to N hasn't filled, then it is a new ID
        {
          *(Arr + (N / 8)) |= 1 << (N %8);                  //Fill the bit at the position according to N
        }
        else Status = Rep;                                  //Otherwise a repeated number exists
        i++;
      }
    }
    if(Status == NoRep) printf("1\n");
    else printf("0\n"); 
  }
  
  return 0;
}