#include <stdio.h>

int main(){
   int t;
   printf("Enter Length of the Bit Stream : ");
   scanf("%d",&t);
   int ar[t];
   printf("Enter Bit Stream : ");
   for(int i = 0; i < t; i++) scanf("%d",&ar[i]);
   
   printf("Digital Signal Flow : ");
   for(int i = 0; i < t; i++) {
       if(ar[i]==1) printf("H-L ");
       else printf("L-H ");
   }
   printf("\n");
    return 0;
}