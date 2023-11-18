#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	//发短信
	int n = 0;//短信条数
	int arr[10] = {0};//短信字数
	scanf("%d", &n);
	for (int q = 0; q < n; q++)
	{
		scanf("%d", &arr[q]);
	}
	float sum = 0;//总共需要多少话费
	for (int o = 0; o < n; o++)
	{
		if (arr[o] <= 60)
		{
			sum += 0.1;
		}
		else {
			sum += 0.2;
		}
	}
	printf("%.1f", sum);
	return 0;	
}