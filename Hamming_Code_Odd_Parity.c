*/ 

Author - Shamura Ahmad 

*/

#include <stdio.h>  
#include <stdlib.h>  
#include <conio.h>  
#include <math.h>  
#include <string.h>

void reverse ( char ar [] , int n ){  
  int i,tmp ;  
  for( i = 1 ; i < n/2 ; i++ ){  
    tmp = ar[i] ;  
    ar[i] = ar[n-i] ;  
    ar[n-i] = tmp ;  
  }  
}  
int length(char ar[]){
   int l =0;
   while(ar[l]!='\0') l++;
   return l;
}

void hamming (char ham[], int n){
    int k=0,c,i,j,m;
    i=pow(2,k);
    while(i < n){
        c=0;
        for(j = i; j < n; j++) {if(((j-i)/i)%2==0 && ham[j]=='1') c++;}
        if(c%2==1) ham[i]='0';
        else ham[i]='1';
        k++;
        i=pow(2,k);
    }
    }
int main() {
    char ar [100];
    printf("Enter data string : ");
    scanf("%s",&ar);
    int k = length(ar)-1;
    char ham [100];
    int i,l;
    for(i = 1; k >= 0; i++){
        l=log2(i);
        if(log2(i)-l==0) ham[i]='X';
        else ham[i]=ar[k--];
    }
   
    l=i;
    reverse(ham,l);
    printf("Before hamming detection : ");
    for(int i = 1;i < l; i++) printf("%c ",ham[i]);
    printf("\n");
    reverse(ham,l);
    hamming(ham,l);
    reverse(ham,l);
    printf("After hamming detection  : ");
    for(int i = 1;i < l; i++) printf("%c ",ham[i]);
    return 0;
}