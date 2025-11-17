#include <stdio.h>

int main() {
    float n;

    printf("Enter a number: ");
    if (scanf("%f", &n) != 1) {
        printf("Invalid Input");
        return 0;
    }

    printf("Square Number: %.3f\n", n * n);
    printf("Cube Number: %.3f", n * n * n);

    return 0;
}
