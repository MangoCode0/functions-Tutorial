#include<stdio.h>
int main(){
    int n ;
    int fib1=0; 
    int fib2=1; 
    int fib;
    printf ("enter the value of n: ");
    scanf("%d",&n);

    for (int i=1; i<=n ; i++){
        printf("%d\n",fib1);
        fib = fib1+fib2;
        fib1=fib2;
        fib2=fib;
    }
}