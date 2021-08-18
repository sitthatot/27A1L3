#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int r = 1; r <= n-1; r++) {
		for (int s = 1; s <= r; s++) {
			printf(" ");
		}
		for (int i = r; i <= n - 1; i++) {
			printf("*");
		}
		for (int i = r; i <= n; i++) {
			printf("*");
		}

		printf("\n");
	}

	for (int r = 1; r <= n; r++) {
		for (int s = r; s <= n; s++) {
			printf(" ");
		}
		for (int i = 1; i <= r-1; i++) {
			printf("*");
		}
		for (int i = 1; i <= r; i++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}