#include<stdio.h>
#include<stdlib.h>

int factorial(int);

int factorial(int a){
    if(a == 0 || a == 1){
        return 1;
    }else{
        return a * factorial(a - 1);
    }
    
}
int main(){
    int a;
    scanf("%d", &a);
    factorial(a);
    printf("%d", factorial(a));
}

