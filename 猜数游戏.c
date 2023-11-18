#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int number = rand()%31+1;
	int count = 0;
	int a = 0;
	//printf("%d \n", number);
		printf("我已经想好了一个一到一百之间的整数。");
	do{
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("您猜的数字大了");
		}
		else if (a < number) {
			printf("您猜的数字小了");
		}
	} while (a!=number);
	printf("太好了，您用了%d次就猜到了答案。\n", count);

	system("pause");
	return 0;
}