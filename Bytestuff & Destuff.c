/*

Author - Shamura Ahmad
This piece of code has the implimentation of byte stuffing and destuffing with flags.

*/

#include<stdio.h>
#include<string.h>

static int i=0,j=0;
static char d[100],ans[100],l[100],sd[100];
static char ds[100],k[100],s[100],esc[]="DLE";

void Char_Stuff(){ // function to generate the stuffed data
 while(d[i]!='\0'){
 strncpy(s,d+i,3);
 if(strcmp(s,esc)==0) strcat(sd,esc), strcat(sd,esc), j+=6, i+=3; // esc has been stuffed when esc occured
 else sd[j++]=d[i++]; // add character normally otherwise
 }
 sd[j]='\0';

 strcpy(ds,sd), strcpy(k,l), strcat(l,sd);
 strcpy(sd,l), strcat(sd,k);
 printf("\n After Stuffing: ");
 printf("%s\n",sd);
}

void De_Stuff(){ // function to generate the stuffed data to its original form
 i=0,j=0;
 while(ds[j]!='\0'){
 strncpy(s,ds+j,3);
 if(strcmp(s,esc)==0) strcat(ans,esc), j+=6, i+=3; // stuffed esc has been removed
 else ans[i++]=ds[j++];
 }
 ans[i]='\0';
 printf("\n After De−stuffing: ");
 printf("%s\n",ans);
}
 int main(){
 printf("\n Enter Data In UpperCase: ");
 scanf("%s",d);
 printf(" Enter Flag In UpperCase: ");
 scanf("%s",l);
 Char_Stuff();
 De_Stuff();
 }

