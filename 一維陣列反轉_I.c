#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MaxSize 100

void Reverse(int Arr[],int idx);

int main()
{
  int Arr[MaxSize];
  int idx = 0;
  
  while (scanf("%d",&Arr[idx])!=EOF) //read integers until end of input
  {
    if(idx<100) idx++;
  }
 
  Reverse(Arr,idx);      //reverse the integers in the Array
  
  for(int i= 0; i < idx; i++)    //print out the reversed array
  {
    if(i != idx -1) printf("%d ",Arr[i]);
    else printf("%d\n",Arr[i]);
  }
  
 return 0;
}

void Reverse(int Arr[],int idx)
{
  int temp;
  for(int i= 0; i < idx/2; i++) //swap ith and (n-i)th elements in the array until the middle of array.
  {
    temp = Arr[i];
    Arr[i] = Arr[idx-i-1];
    Arr[idx-i-1] = temp;
  }
}