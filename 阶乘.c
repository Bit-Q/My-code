#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int n = 0;
	int a = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a =  a*i;
	};

	printf("%d", a);

	return 0;
} 