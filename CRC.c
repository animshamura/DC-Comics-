// Author - Shamura Ahmad 

#include <stdio.h>
#include <stdlib.h>

int d1,d2,k=0;
int dv1 [100], dv2[100], Rem[100];
void Remainder (int rem[], int dv []){
    for(int j = 1; j < d1 ; j++) 
        Rem[j-1] = dv2[j]^(rem[0]==1)?dv[j]:0;
}

int main(){
   printf("Enter Divisor Bits Length : ");
   scanf("%d",&d1);
   printf("Enter Divisor Bits : ");
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
  printf("Result : ");
  for(int i = 0; i < d2+d1-1; i++) printf("%d ",dv2[i]);
  printf("\n");
   return 0;
}
