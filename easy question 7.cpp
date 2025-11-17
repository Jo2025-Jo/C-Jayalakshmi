#include <stdio.h>

int main() {
    int P, Q, R;

    printf("Enter P: ");
    scanf("%d", &P);
    printf("Enter Q: ");
    scanf("%d", &Q);
    printf("Enter R: ");
    scanf("%d", &R);

    printf("Numbers are = ");

    for (int i = P; i <= Q; i++) {
        int temp = i;
        int skip = 0;

        // Check if digit R appears in number i
        while (temp != 0) {
            if (temp % 10 == R) {
                skip = 1;
                break;
            }
            temp = temp / 10;
        }

        if (skip)
            continue;  // Skip number

        printf("%d, ", i);
    }

    return 0;
}
