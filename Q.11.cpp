#include <stdio.h>
int main() {
	int a,b,i;
	printf("ENTER THE TABLE REQUIRED: ");
	scanf("%d",&a);
	printf("ENTER THE LIMIT: ");
	scanf("%d",&b);
	for (i=1;i<=b;i++) {
		printf("%d x %d = %d \n",a,i,a*i);
	}
	return 0;
}
