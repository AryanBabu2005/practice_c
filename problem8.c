#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    printf("Initial value of a: %d\n", a);
    printf("Using pre-increment (++a): %d\n", ++a);
    printf("Value of a after pre-increment: %d\n", a);
    
    printf("\n");

    printf("Initial value of b: %d\n", b);
    printf("Using post-increment (b++): %d\n", b++);
    printf("Value of b after post-increment: %d\n", b);
    
    return 0;
}
