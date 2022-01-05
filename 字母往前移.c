#include<stdio.h>
#include<stdlib.h>

void Cipher(char c, int K);

int main()
{
  char input[100];
  char *ptr = input;
  int K;
  
  fgets(input,100,stdin);  //read input content
  scanf("%d",&K);          //read cipher value
  
  while(*ptr)
  {
   Cipher(*ptr,K);  //encrypt each char A to Z and numbers with according to cipher walue
   ptr++; 
  }
  return 0;
}

void Cipher(char c, int K)
{
 if(c >= 'a' && c <='z') //if the character is lowercase alphabet
 {
  c = c -'a' + K + 1;  //calculate the value of character after encrypted 
  if(c > 26){          //determine if the encrypted character is out of alphabet range (1 ~26)
    c = 'a' + (c%26) - 1;
  }
  else{
    c = c + 'a' -1;
  }
 }  
 else if(c >= 'A' && c <='Z') //if the character is uppercase alphabet
 {
  c = c -'A' + K + 1;    //calculate the value of character after encrypted  
  if(c > 26){            //determine if the encrypted character is out of alphabet range (1~26)
    c = 'A' + (c%26) - 1;
  }
  else{
    c = c + 'A' -1;
  }
 }
 else if(c >= '0' && c <='9') //if the character is number between 0~9
 {
  c = c -'0' + K + 1;     //calculate the value of character after encrypted
  if(c > 10){             //determine if the encrypted character is out of number range (1~10)
    c = '0' + (c%10) - 1;
  }
  else{
    c = c + '0' -1;
  }
 }
 
 printf("%c",c);  //print out the encrypted character
}