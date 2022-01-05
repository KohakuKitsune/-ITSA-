#include<stdio.h>
#include<stdlib.h>

typedef struct data
{
  int** Arr;
  int n;
  int m;
}Data;

int **Create_Arr(int n, int m);        //create a n x m array
void GraphSide(int **Arr,int n,int m); // graph the array which its sides denote as 1, otherwise 0

int main()
{
  Data *input;
  int Arr_Cnt,n,m;
  int **Arr;
  
  scanf("%d",&Arr_Cnt);  //read the number of arrays needed to read
  
  input = (Data*) malloc (sizeof(Data) * Arr_Cnt);
  
  for(int i = 0; i < Arr_Cnt; i++)
  {
    scanf("%d %d",&(input+i) -> n, &(input+i)-> m); //read the size of the current array
    (input+i) -> Arr = Create_Arr((input+i) ->n,(input+i)->m);    
  }
  
  for(int i = 0; i < Arr_Cnt;i++)
  {
    GraphSide((input+i)->Arr ,(input+i) -> n,(input+i) -> m);
    if( i < Arr_Cnt-1) printf("\n");
    free((input+i)->Arr);  
  }
  return 0;
}

int **Create_Arr(int n, int m)
{
  int **Arr;
  
  if((n >=1)&&(m <= 100) && (m >= 0))
  {
    Arr = (int**) malloc (sizeof(int*) * n);  //allocate row space for the array
    for(int i = 0 ; i < n ; i++) *(Arr+i) = (int*) malloc (sizeof(int) * m); //allocate column space for the array
    
    for (int i = 0; i < n ; i++)
      for (int j = 0; j < m; j++) scanf("%d",(*(Arr + i) + j));  //fill the array will 0 and 1 values to input the shape into a 2d array
  }
  return Arr;
}

void GraphSide(int ** Arr, int n, int m)
{
 int i,j;
 
 for(i = 0; i < n; i++)
 {
  for(j = 0; j < m; j++)
  {
    if(*(*(Arr+i)+j) != 0)  //determine if the current position is filled or empty
    { 
      if( *(*(Arr+i)+j+1) == 0 || *(*(Arr+i)+j-1) == 0) printf("0");  // determine if the filled position is the side of the shape filled in the 2D array 
      else if( *(*(Arr+i+1)+j) == 0 || *(*(Arr+i-1)+j) == 0) printf("0");
      else printf("_");
    }
    else printf("_");
    
    printf(" ");
  }
  printf("\n");
 }
}