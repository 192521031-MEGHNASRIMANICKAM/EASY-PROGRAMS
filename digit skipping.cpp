#include <stdio.h>
int main() {
    int P, Q, R, i, temp, digit;
    printf("P = ");
    scanf("%d", &P);
    printf("Q = ");
    scanf("%d", &Q);
    printf("R = ");
    scanf("%d", &R);
    printf("Numbers are = ");
    for (i = P; i <= Q; i++) {
        temp = i;          
        int skip = 0;      
        if (temp < 0)      
            temp = -temp;
        while (temp > 0) {
            digit = temp % 10;     
            if (digit == R) {      
                skip = 1;
                break;
            }
            temp = temp / 10;      
        }
        if (skip)
            continue;              
        printf("%d ", i);          
    }
    return 0;
}
