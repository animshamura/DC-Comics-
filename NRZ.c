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
    int ar[t];
    int out_ar[t];
    printf("Enter Bits Sequence : ");
    for(int i = 0; i < t; i++) scanf("%d",&ar[i]);
    printf("Enter Previous State : ");
    scanf("%s",&p);
    if(p[0]=='H') prev=1;
    else prev=0;
    for(int i = 0; i < t; i++){
        if(ar[i]==HIGH) out_ar[i]= !prev;
        else out_ar[i]= prev;
        prev = out_ar[i];
    }
     printf("Input  : ");
     for(int i = 0; i < t; i++) printf("%d ",ar[i]);
      printf("\nOutput : ");
      for(int i = 0; i < t; i++) printf("%c ", (out_ar[i]==1)? 'H' : 'L');
    return 0;
}