// Author - Shamura Ahmad 

#include <stdio.h>
#include <stdlib.h>

int d1,d2,k=0,r1,r2;
int dv1 [100], dv2[100], Rem[100];

void Remainder (int rem[], int dv []){
        r1=rem[0];
    for(int j = 1; j < d1 ; j++) {
        r2=(r1==1)?dv[j]:0;
        Rem[j-1] = rem[j]^r2;
    }
}

int main(){
   printf("Enter Divisor Bits Length : ");
   scanf("%d",&d1);
   printf("Enter Divisor Bits  : ");
   for(int i = 0; i < d1; i++) scanf("%d",&dv1[i]);
   printf("Enter Dividend Bits Length : ");
   scanf("%d",&d2);
   printf("Enter Dividend Bits : ");
   for(int i = 0; i < d2; i++) scanf("%d",&dv2[i]);
   for(int i = d2; i < d2+d1-1; i++) dv2[i]=0;
   
   Remainder(dv2,dv1);
   
   for(int i = d1; i < d1+d2-1; i++){
       Rem[d1-1]=dv2[i];
       Remainder(Rem,dv1);
   }

  for(int i = d2; i < d1+d2-1; i++) dv2[i] = Rem[k++];
  printf("Recieved Bit Stream : ");
  for(int i = 0; i < d2+d1-1; i++) printf("%d ",dv2[i]);
  printf("\n");
   return 0;
}
