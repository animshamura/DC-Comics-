#include <stdio.h>
#include <string.h>
char res [100];
int Bit_Stuff(char str[]){
int c=0;
int j = 0;
int count = 0;
for(int i = 0; str[i]!='\0';i++){
if(str[i]=='1') {
c++;
res[j++]=str[i];
if(c==5) res[j++]='0', c=0, count++;
}
else res[j++]=str[i],c=0;
}
return count;
}
int main(){
char str [100],flag [100],result[100];
printf("Enter input data : ");
scanf("%s",&str);
printf("Enter flag data : ");
scanf("%s",&flag);
printf("Sample input : %s",str);
int c = Bit_Stuff(str);
strcpy(result,flag);
strcat(res,flag);
strcat(result,res);
printf("\nSample output : %s\nStuff bits added : %d\nFlag bit : %s",result,c,flag);

printf("\n");
return 0;
}
