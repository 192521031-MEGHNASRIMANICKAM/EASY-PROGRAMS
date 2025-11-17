#include<stdio.h>
int main() {
	int age;
	printf("ENTER THE AGE: ");
	if (scanf("%d",&age)!=1) {
		printf("INVALID");
	}
	else if (age<0) {
		printf("INVALID");
	}
	else if (age>=18) {
		printf("YOU ARE ELIGIBLE TO VOTE.");
	}
	else if (age<18) {
		printf("YOU ARE CURRENTLY NOT ELIGIBLE. YOU CAN VOTE IN %d YEARS", 18-age);
	}
	return 0;
}
