#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void DecToBin(int num){
    int k = 7;
    int Res [] = {0,0,0,0,0,0,0,0,0};
    while(num>0){
        Res[k--]=num%2;
        num/=2;
    }
    for(int i = 0; i < 8; i++) printf("%d",Res[i]);
}

void BinToDec(char byte []){
    int ans = 0, p = 7;
    for(int i = 0; i < 8; i++){
        if(byte[i]=='1') ans+=pow(2,p);
        p--;
    }
    printf("%d",ans);
}
    
int main() {
   int q;
   char IP [40];
   printf("Enter \n1 to Convert IPV4 Dotted Decimal IP to IPV4 32 Bit Binary IP\n2 to Convert IPV4 32 Bit Binary IP to IPV4 Dotted Decimal IP\n");
   scanf("%d",&q);
   if(q==1) printf("Enter IPV4 Dotted Decimal IP : ");
   else printf("Enter IPV4 32 Bit Binary IP : ");
   scanf("%s",IP);
    char * Byte = strtok(IP, ".");
    if(q==1) printf("IPV4 32 Bit Binary IP : ");
    else printf("IPV4 Dotted Decimal IP : ");
    if(q==1) DecToBin(atoi(Byte));
    else BinToDec(Byte);
    Byte = strtok(NULL, ".");
   while(Byte != NULL ) {
      printf(".");
      if(q==1) DecToBin(atoi(Byte));
      else BinToDec(Byte);
      Byte = strtok(NULL, ".");
   }
    return 0;
}