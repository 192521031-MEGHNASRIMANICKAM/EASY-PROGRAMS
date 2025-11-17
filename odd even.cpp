#include<stdio.h>
int main() {
	int a;
	printf("ENTER A NUMBER: ");
	if (scanf("%d",&a)!=1) {
		printf("INVALID");
	}
	else if (a==0) {
		printf("ZERO IS NEITHER ODD NOR EVEN");
	}
	else if (a%2==0) {
		printf("IT IS EVEN");
	}
	else {
		printf("IT IS ODD");
	}
	return 0;
}
