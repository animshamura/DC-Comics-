/* 

Author - Shamura Ahmad 

*/ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HIGH 1
#define LOW 0

int main()
{
    int t,prev;
    char p [4];
    printf("Enter Number of Bits : ");
    scanf("%d",&t);
    char ar[t];
    int ar1[t];
    int out_ar[t];
    printf("Enter Bits Sequence : ");
    scanf("%s",&ar);
    for(int i = 0; i < t; i++) ar1[i]= (ar[i]=='H')? 1 : 0;
    printf("Enter Previous State : ");
    scanf("%s",&p);
    if(p[0]=='H') prev=1;
    else prev=0;
    for(int i = 0; i < t; i++){
        if(prev==HIGH) out_ar[i]= !ar1[i];
        else out_ar[i]= ar1[i];
        prev = ar1[i];
    }
     printf("Input  : ");
     for(int i = 0; i < t; i++) printf("%c ", ar[i]);
      printf("\nOutput : ");
      for(int i = 0; i < t; i++) printf("%d ", out_ar[i]);
    return 0;
}