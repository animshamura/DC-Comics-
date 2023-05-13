
#include <stdio.h>

int main(){
   int t,p;
   printf("Enter Length of the Bit Stream : ");
   scanf("%d",&t);
   int ar[t];
   printf("Enter Bit Stream : ");
   for(int i = 0; i < t; i++) scanf("%d",&ar[i]);
   printf("Enter Previous State : ");
   scanf("%d",&p);
   printf("Digital Signal Flow : ");
   
   for(int i = 0; i < t; i++) {
       if(ar[i]==1) {
           if(p==1) printf("H-L ");
           else printf("L-H ");
           p=!p;
       }
       else {
          if(p==1) printf("H-L-H ");
           else printf("L-H-L "); 
       }
   } 
   printf("\n");
    return 0;
}
