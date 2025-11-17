#include <stdio.h>

int main() {
    int m, n;

    printf("M = ");
    scanf("%d", &m);

    printf("N = ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input for N\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", i, m, i * m);
    }

    return 0;
}

