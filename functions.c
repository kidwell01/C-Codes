#include<stdio.h>
#include<stdlib.h>
#include<string.h>

double square(double );

int main()
{
    double x;
    square(x);
    scanf("%lf", &x);
    while(x!=0){
        printf("%lf", x*x);
        scanf("%lf", &x);
    }
    //return 0;
}
double square(double x){
   return x*x;
}