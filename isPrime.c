#include<stdio.h>
#include<stdlib.h>

int isPrime(int);
int main()
{
    int x;
    isPrime(x);
}
int isPrime(int x){
    if(x == 0){
        return 1;
    }
    while(x>0){
        if(x%2==0){
            printf("not prime");
        }else{
            printf("prime");
        }
        scanf("%d",&x);
    }
    return 1;
}