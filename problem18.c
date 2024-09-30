// to calculate the BMI of a person

#include <stdio.h>
float BMI( float x, float y);

int main()
{
    float h;
    float w;
    printf("Enter the height of a person in m: ");
    scanf("%f", &h);
    printf("Enter the weight of the person in kg: ");
    scanf("%f", &w);
    BMI(h,w);


}

float BMI( float x, float y)
{
    float s = y/(x*x);
    printf("The BMI of the person is %f\n", s);

}

