#include<stdio.h>

#define ArrSize 10
void reverse(int *Arr);  //reverse the order of the elements the target array
void display(int *Arr);  //print out the taget array onto the terminal

int main()
{
  int Arr[ArrSize];
  int *Result;
  
  for (int i = 0; i < ArrSize; i++) scanf("%d",&Arr[i]); //read 10 intergers
  
  //display(Arr)
  reverse(Arr);
  
  return 0;
}

void display(int *Arr)
{
  for(int i = 0; i < ArrSize; i++)
  {
    if(i != ArrSize-1) printf("%d ",Arr[i]);
    else printf("%d\n",Arr[i]);
  }
}


void reverse(int *Arr)
{
  int RevArr[ArrSize];
  
  for(int i = 0; i < ArrSize; i++) RevArr[i] = Arr[ArrSize - 1 -i];  //switch the ith and (9-i)th elements
  
  display(RevArr);
}  