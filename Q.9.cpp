#include <stdio.h>
int main() {
    int rows;
    printf("Number of Rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid Input\n");
        return 0;
    }
    for (int i = 1; i <= rows; i++) {
        for (int s = 1; s <= rows - i; s++) {
            printf("  ");
        }
        for (int num = i; num >= 1; num--) {
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}
