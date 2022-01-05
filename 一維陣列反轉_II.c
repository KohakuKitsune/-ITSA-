#include<stdio.h>
#include<stdlib.h>

#define MaxSize 6

int main()
{
  int Arr[MaxSize];
  int idx;
 
 for(idx = 0 ; idx < 6 ; idx ++)  //read 6 integers
 {
  scanf("%d",&Arr[idx]);
  }
 
 for(idx = idx - 1 ; idx >= 0 ; idx--)  //printf out the integers in reverse order
 {
  if(idx != 0) printf("%d ",Arr[idx]);
  else printf("%d\n",Arr[idx]);
 }
 
 return 0;
}