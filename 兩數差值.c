#include<stdio.h>
#define MAX 7

int GetNum(char *str, int *Arr);          //get intergers from the target string and put into dest array
void Selection_Sort(int *Arr, int Cnt);   //Sort the numbers in descending order
void CalculateMaxMin(int *Arr, int Cnt);  //Calulate the difference of both maximum and minimum value form by the intergers

int main()
{
  char str[1024];
  int Arr[MAX];
  int Cnt = 0;
  
  scanf("%s",str);        //get input string
  Cnt = GetNum(str,Arr);  
  if(Cnt != 0)  //determine if the input intergers have maxed out the given array space
  {
    Selection_Sort(Arr, Cnt); 
  }
  CalculateMaxMin(Arr, Cnt);   
  return 0;
}

int GetNum(char *str, int *Arr)
{
  int Cnt = 0;
  char *ptr = str;     //set the pointer at the beginning of the input string
  
  while(*ptr != '\0')  //shift pointer until the end of string
  {
    if(Cnt<MAX)
    {
      if(*ptr >='0' && *ptr <='9')  //the content is a number between 0 and 9
      {
        *(Arr+Cnt) = *ptr - '0';  //store the number into the array
        Cnt++;
      }   
    }
    else return 0;
    ptr++; 
  }
  
  return Cnt;
}

void Selection_Sort(int *Arr, int Cnt)  
{  
  int index,temp;  
  
  for(int i = 0; i < Cnt; i++)  
  { 
    index = i;  
  
    for(int j = i+1 ; j < Cnt; j++)  
    {  
      if(*(Arr+j) > *(Arr+index)) index = j;  
    }    
    temp = *(Arr+index);  
    *(Arr+index) = *(Arr+i);  
    *(Arr+i) = temp;
  }
}

void CalculateMaxMin(int *Arr, int Cnt)
{
  int Max = 0;
  int Min = 0;
  
  for (int i = 0; i < Cnt; i++)
  {
    Max = (Max * 10) + *(Arr+i);
    Min = (Min * 10) + *(Arr+Cnt-1-i);
  }
  
  printf("%d\n",Max-Min);
}