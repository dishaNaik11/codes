#include <stdio.h>

int main() {
    int a, b;
    printf("enter two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;  // Adding both numbers and storing the result in 'a'
    b = a - b;  // Subtracting 'b' from the updated 'a' to get original 'a', and storing it in 'b'
    a = a - b;  // Subtracting the original 'a' (now stored in 'b') from the updated 'a' to get original 'b'

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
