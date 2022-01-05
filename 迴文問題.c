#include<stdio.h>
#include<string.h>

int Check_Palindrome(char* input)   //determine if the string is a palindrome
{  
    char*strt=input;                //put a pointer at the start of the string
    int len=strlen(input);  
    char*end = input+len-1;         //put a pointer at the end of the string
    
    for(int i=0; i<len/2; i++){
        if(*strt!=*end){            //if there is a value of i which the ith character and (length of string -i) th character is not the same
            return 0;               // return the signal that the string is not a palindrome
        }
        strt++;
        end--;
    }
    
    return 1;                      // return the signal that the string is a palindrome
}                                  //if there isn't any value of i which the ith character and (length of string -i) th character is not the same

int main()
{
    char input[1024];
    while(scanf("%s",input)!=EOF){    //read stings until end of input
        if(Check_Palindrome(input)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}