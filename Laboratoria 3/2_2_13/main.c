#include <stdio.h>
//open AI
void printSumOfSquares(int n, int sameOrder) {
    int a, b;
    for (a = 1; a * a <= n / 2; a++) {
        for (b = a; b * b <= n - a * a; b++) {
            int c = n - a * a - b * b;
            if (c < b * b) break;
            if (sameOrder || b >= a) {
                printf("%d = %d^2 + %d^2\n", n, a, b);
                if (b != a) printf("%d = %d^2 + %d^2\n", n, b, a);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    printf("Distinct orders:\n");
    printSumOfSquares(n, 0);
    printf("Same order:\n");
    printSumOfSquares(n, 1);
    return 0;
}
