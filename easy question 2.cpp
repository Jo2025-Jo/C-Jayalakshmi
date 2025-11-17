#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;        // get last digit
        rev = rev * 10 + rem;  // build reverse number
        num = num / 10;        // remove last digit
    }

    printf("Reverse Number = %d", rev);

    return 0;
}
