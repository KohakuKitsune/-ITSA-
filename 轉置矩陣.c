#include<stdio.h>

void PrintArr(int row, int col,int Arr[row][col]);  //print out the array
void InputElement(int N, int M,int Arr[N][M]);      //Input intergers into the array
void transpose(int N, int M);                       //Transpose the targeet array 

int main()
{
  int N,M;
  int **Arr;
  
  scanf("%d %d",&N,&M);
  
  if(N == 0 && M == 0) return 0;
  else 
  {
    transpose(N,M);
  }
  
  return 0;
}

void InputElement(int N, int M,int Arr[N][M])
{
  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < M; j++)
    {
      scanf("%d",&Arr[i][j]);
    }
  }
}

void PrintArr(int row, int col,int Arr[row][col])
{
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      if(j != col-1) printf("%d ",Arr[i][j]);
      else printf("%d\n",Arr[i][j]);
    }
  }
}

void transpose(int N, int M)
{
  int Arr[N][M];
  int TranArr[M][N];
  
  InputElement(N, M,Arr);
  
  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < M; j++)
    {
      TranArr[j][i] = Arr[i][j];
    }
  }
  
  PrintArr(M,N,TranArr);
}