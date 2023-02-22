/*
Author - Shamura Ahmad
The concept of stuffing bits is a number of consecutive high bits will be given and only 0 or 1 has to be stuffed
if any consecutive high bits sequence satisfies the given constrain. On the other hand, destuffing is exactly opposite
to the stuffing. Here, stuffed bits have to be removed.
*/

#include <stdio.h>
#include <string.h>

static int k = 0;

int * bitStuff (int n, int ar []){
    static int res[30];
    int c =0;
    for(int i = 0; i < n; i++ ){
        res[k++]= ar[i]; // Coping as it is
        if(ar[i]==1) c++; // Counting high bits
        else c=0;  // Low bit occured thus number of consecutive high bits set to 0

     if(c==5) res[k++]=0, c=0; // Stuffing 0 after 5 consecutive high bits
    }

    for(int i = 0; i < k; i++) printf("%d",res[i]); // Printing the stuffed string
    printf("\n");
    return res;
}

int * deStuff(int n, int ar []){
    int r [n];
    k = 0;
    int c=0;
    for(int i = 0; i < n; i++) {
        if(ar[i]==1) {r[k++]=ar[i]; c++;} // Counting consecutive high bits
        else {
            if(c!=5) r[k++]=ar[i]; // Coping as it is
            else c=0; // Setting the count to 0 when 5 consecutive high bits occured and removed the stuffed bit
        }
    }

    for(int i = 0; i < k; i++) printf("%d",r[i]); // Printing the destuffed string
}
int main(){
    int n = 12;
    int ar []= { 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 , 1 , 0}; // Default data input
    printf("Input string     : ");
    for(int i = 0; i < n; i++) printf("%d",ar[i]); // Printing the default data
    printf("\n");
    printf("Stuffed string   : ");
    int * ar2 = bitStuff(n,ar); // Stuffing bits into the string
    printf("Destuffed string : ");
    deStuff(k,ar2); // Destuffing bits from the string

}
