#include<stdio.h>
#include<stdlib.h>


int main()
{
  int input,i,temp;
  int Arr[4];
  
  scanf("%d",&input);  //read input
  
  for(i = 3; i >=0; i--)
  {
    Arr[i] =  ( (input % 10) + 7) %10;  //obtain each digit and encrypt with formula (digit + 7) % 10
    input = input / 10;
  }
  
  for(i = 0; i < 2; i++)  //swap digits at i place and i+2 place
  {
    temp = Arr[i];
    Arr[i] = Arr[i+2];
    Arr[i+2] = temp;
  }
  
  for(i = 0; i < 4; i++)  //printf out the encrypted number
  {
    printf("%d",Arr[i]);
  }
  printf("\n");
  return 0;
}