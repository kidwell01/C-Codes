#include<stdio.h>
#include<stdlib.h>

int DecimalToBinary(int);
int main(){
    int x;
    while(x!=0){
    scanf("%d", &x);
    DecimalToBinary(x);
    }
    return 0;
}
int DecimalToBinary(int x){
    if(x == 0){
        printf("0");
        return 1;
    }
    int i = 0;
     int arr[64];
    while(x > 0){
        arr[i++] = x % 2;
        x = x/2;
        
    }
    for(int j = i-1; j>=0; j--){
        printf("%d", arr[j]);
        
      }
    return 0;
}