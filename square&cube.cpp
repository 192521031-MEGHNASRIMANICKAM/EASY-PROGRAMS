#include<stdio.h>
int main() {
	double num, square, cube;
    printf("Enter a number: ");
    if (scanf("%lf", &num) != 1) {
        printf("Invalid Input\n");
        return 0;
    }
    square = num * num;
    cube = num * num * num;
    printf("Square Number: %.2lf\n", square);
    printf("Cube Number: %.2lf\n", cube);
    return 0;
}
