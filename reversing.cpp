#include <stdio.h>
int main() {
    long long n, r = 0, o;
    int s = 1, d;
    printf("Enter the number: ");
    if (scanf("%lld", &n) != 1) {  
        printf("Invalid\n");
        return 0;
    }

    o = n;

    if (n< 0) {
        s = -1;
        n= -n;
    }

    while (n > 0) {
        d = n % 10;
        r = r* 10 + d;
        n /= 10;
    }

    r= r * s;

    printf("Reverse Number: %lld\n", r);

    return 0;
}

