#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	//������
	int l = 0;//��ֵ
	int r = 0;//��ֵ
	int sum = 0;//������
	scanf("%d %d", &l, &r);
	if (l == 2)
	{
		sum += 2;
	}
	for (int i = l; i <= r; i++)
	{
		for (int p = 2; p < i; p++)
		{
			if (i % p == 0)
			{
				sum += i;
				break;
			}
			if (p == i - 1)
			{
				sum += i;
			}
		}
	}
	printf("%d", sum);

	return 0;
}