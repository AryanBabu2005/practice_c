#include <stdio.h>

int main()
{
    int p,a,l,w;
    printf("Enter the length: ");
    scanf("%d", &l);
    printf("Enter the width: ");
    scanf("%d", &w);

    printf("The area of your rectangle is %d\n", l*w);
    printf("The perimeter of your rectangle is %d\n", 2*(l+w));

}