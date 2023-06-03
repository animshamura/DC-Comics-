#include <stdio.h>
#include <stdlib.h>
int main(){
    int t;
    printf("Enter the length of the data stream : ");
    scanf("%d",&t);
    int ar[t];
    printf("Enter the data stream : ");
    for(int i = 0; i < t; i++) scanf("%d",&ar[i]);
    int p = 1;
    char pos [] = {'N','P'};
    printf("Output signal :  ");
    for(int i= 0; i < t; i++){
    if(ar[i]==0) printf("Z ");
    else {printf("%c ",pos[p]); p=!p;}
    }
    printf("\n");
    return 0;
}
