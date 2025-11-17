#include <stdio.h>
int main() {
    int x, n, choice,i;
    long long p = 1; 
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter your choice:\n");
    printf("1. Pow(X, N)\n");
    printf("2. Add(X, N)\n");
    printf("3. Sub(X, N)\n");
    printf("4. Mul(X, N)\n");
    printf("5. Div(X, N)\n");
    scanf("%d", &choice);
    if (choice == 1) {
        for(i = 0; i < n; i++) {
            p = p * x;
        }
        printf("Pow(%d, %d) = %lld\n", x, n, p);
    }
    else if (choice == 2) {
        printf("Add(%d, %d) = %d\n", x, n, x + n);
    }
    else if (choice == 3) {
        printf("Sub(%d, %d) = %d\n", x, n, x - n);
    }
    else if (choice == 4) {
        printf("Mul(%d, %d) = %d\n", x, n, x * n);
    }
    else if (choice == 5) {
        if (n == 0)
            printf("Division by zero NOT possible.\n");
        else
            printf("Div(%d, %d) = %d\n", x, n, x / n);
    }
    else {
        printf("Invalid");
    }
    return 0;
}

