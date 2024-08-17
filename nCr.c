// #include<stdio.h>
// int main(){
//     int n,r;
//     printf ("enter the value of n: ");
//     scanf("%d", &n);
//     printf ("enter the value of r: ");
//     scanf("%d", &r);
//     int nfact=1,rfact=1 , nrfact=1;
    

//     for (int i=2; i<=n ; i++){
//         nfact = nfact * i;int n,r;
//     // int  r ;
//     pint n,r;
//     // int  r ;
//     printf ("enter the value of n: ");
//     scanf("%d", &n);
//     printf ("enter the value of r: ");
//     scanf("%d", &r);
//     int nfact=1,rfact=1 , nrfact=1;
    
//     int nfact=1,rfact=1 , nrfact=1;
    
//     }
//     for (int i=2 ; i<=r ; i++){
//         rfact = rfact*i;
//     }
//     for (int i= 2 ; i<=(n-r) ; i++){
//         nrfact = nrfact*i;
//     }


//     int nCr = nfact/(rfact*nrfact);
//     printf("nCr is :%d\n",nCr);
// return 0;

// }

// // by fuction

#include<stdio.h>
    int factorial(int n){
        int fact=1;
        for (int i = 2; i<=n; i++){
        fact = fact * i;
    }    
    return fact;
}

int main(){
    int n, r;
    printf ("enter n: ");
    scanf("%d",&n);
    printf ("enter r: ");
    scanf("%d",&r);
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    printf ("nCr is %d\n",nCr);    
    return 0;
}