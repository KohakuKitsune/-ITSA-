#include<stdio.h>
#include<stdlib.h>

#define MaxSize 6

int main()
{
  int Arr[MaxSize];
  int idx,temp,power;
  int CubicSum = 0;
 
 for(idx = 0; idx < 6; idx ++)  //read 6 integers
 {
  scanf("%d",&Arr[idx]);
  }
 
 for(int i = 0; i < idx; i++)  //calculate the cubic sun of all 6 integers
 {
  temp = Arr[i];
  power = temp;
  for(int j = 0;  j < 2; j++) //calculate the cubic power of the current integer
  {
    power = power * temp;
  }
  CubicSum = CubicSum + power;
 }
 printf("%d\n",CubicSum);
 
 return 0;
}