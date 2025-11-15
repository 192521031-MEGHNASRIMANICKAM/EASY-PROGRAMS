#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter the number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid Input\n");
        return 0;
    }
    if (num <= 0) {
        printf("Invalid Input\n");
        return 0;
    }
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num)
        printf("It's a Perfect Number\n");
    else
        printf("Not a Perfect Number\n");
    return 0;
}
