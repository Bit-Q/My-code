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
		printf("���Ѿ������һ��һ��һ��֮���������");
	do{
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("���µ����ִ���");
		}
		else if (a < number) {
			printf("���µ�����С��");
		}
	} while (a!=number);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);

	system("pause");
	return 0;
}