#include<stdio.h>
#include<stdlib.h>

int Sum(int);

int Sum(int x){
    if(x == 0){
        return 0;
    }else{
        return x%10 + Sum(x/10);
    }
}
int main(){
    int x;
    scanf("%d", &x);
    printf("%d",Sum(x));
}
