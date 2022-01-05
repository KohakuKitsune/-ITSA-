#include<stdio.h>
#include<stdlib.h>

#define DEF_Year 2010   //Known year 2010 is tiger year
#define DEF_Zodiac 2    //the index for the word tiger is at the 2nd place of the array
#define Tot_Zodiac 11   //the index range is from 0 to 11


int main()
{
 char *Zodiac[12] ={"rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};
 int input;
 
 scanf("%d",&input);
 
 input = (input - DEF_Year) %12;  //calculate how much ammount should we need to shift the index
 
 if(input < -DEF_Zodiac) printf("%s",Zodiac[Tot_Zodiac+input]);
 
 else printf("%s\n",Zodiac[DEF_Zodiac+input]);
 
 return 0;
}