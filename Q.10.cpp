#include <stdio.h>
int main() {
	int n,i,j;
	printf("ENTER THE LIMIT: ");
	if (scanf("%d",&n)!=1||n<=0) {
		printf("INVALID");
	}
	else {
		for(i=1;i<=n;i++) {
			for (j=1;j<=i;j++) {
				printf("%d",i);
			}
			printf("\n");
		}
	}
	return 0;
}
