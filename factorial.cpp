#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;
    printf("Enter N: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input\n");
        return 0;
    }
    if (n < 0) {
        printf("Factorial of negative number is NOT possible\n");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("%d! = %lld\n", n, fact);
    return 0;
}
