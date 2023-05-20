#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int Decimal(char s []){
int ans = 0;
for(int i = 0; i < 8; i++) if(s[i]=='1') ans+= pow(2,7-i);
return ans;
}
char CheckClass (int i){
if(i>=1 && i<=127) return 'A';
else if(i>=128 && i<=191) return 'B';
else if(i>=192 && i<=223) return 'C';
else if(i>=224 && i<=239) return 'D';
else if(i>=240 && i<=255) return 'E';
}
int Check1(int i ){
return (i>=1 && i <=255)? 1:0;
}
int Check2(int i ){
return (i>=0 && i <=255)? 1:0;
}
int main()
{
char ip [100];
printf("Enter 32-Bit Binary IP : ");
scanf("%s", ip);

char * Byte = strtok(ip,".");
int b1 [4];
b1[0] = Decimal(Byte);
Byte = strtok(NULL,".");
b1[1] = Decimal(Byte);
Byte = strtok(NULL,".");
b1[2] = Decimal(Byte);
Byte = strtok(NULL,".");
b1[3] = Decimal(Byte);
printf("Converted Decimal IP : %d.%d.%d.%d\n",b1[0],b1[1],b1[2],b1[3]);
int c1= Check1(b1[0]);
int c2= Check2(b1[1]);
int c3= Check2(b1[2]);
int c4= Check2(b1[3]);
if(c1) printf("Class of The Given IP : %c\n",CheckClass(b1[0]));
else printf("Invalid Class.\n");
if(c1+c2+c3+c4==4) printf("This IP is valid.\n");
else printf("This IP is invalid.\n");
return 0;
}
