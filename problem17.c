#include <stdio.h>

int main()
{
    float a;
    float x;
    printf("Enter a float: ");
    scanf("%f", &a);
    printf("Enter another float: ");
    scanf("%f", &x);
    int n;
    printf("Choose your operation\n 1. a+=\n 2. a-=\n 3. a*=\n 4. a/=\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
          printf("Your selected operation results in: %f\n", a+=x);
          break;
        case 2:
            printf("Your selected operation results in: %f\n", a-=x);
            break;
        case 3:
            printf("Your selected operation results in: %f\n", a*=x);
            break;
        case 4:
             printf("Your selected operation results in: %f\n", a/=x);
             break;

    }

}