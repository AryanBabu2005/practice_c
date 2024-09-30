#include<stdio.h>

int main(){
    float p, r, t;
    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%f", &t);

    printf("The simple interest on given principle is %.2f ", (p*r*t)/100.0);
    return 0;
    
}