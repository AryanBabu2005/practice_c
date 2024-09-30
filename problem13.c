#include <stdio.h>
#include<math.h>

int main()
{
    float a, b, c, D, root1, root2, realpart, imaginarypart;

    printf("Enter the coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = (b*b - 4*a*c)/2*a;

    if(D > 0){
        
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);

    }
    else if(D == 0){

        root1 = -b/(2*a);
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else{

        realpart = -b/(2*a);
        imaginarypart = sqrt(-D)/(2*a);
        printf("Root1 = %.2f + %.2fi\n", realpart, imaginarypart);
        printf("Root2 = %.2f - %.2fi\n", realpart, imaginarypart);
    }

    return 0;

}