#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int cmp(void* buf1,void * buf2)
{
	return (*(int*)buf2 - *(int*)buf1);
}
void jiaohuan(char* e1, char* e2, int i)
{
	for (int p = 0; p < i; p++)
	{
		char tmp = 0;
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
void maopao(void* pf, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (; i < sz - 1; i++)
	{
		int sum = 1;
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)pf + j * width, (char*)pf + (j + 1) * width) > 0)
			{
				jiaohuan((char*)pf + j * width, (char*)pf + (j + 1) * width, width);
				sum = 0;
			}
		}
		if (sum == 1)
		{
			break;
		}
	}
}
int main()
{
	//Ä£ÄâqsortÃ°ÅÝÅÅÐò
	int arr[] = { 456,789,786,45, 4512,4612,5401,4512,7854,0457};
	int sz = sizeof(arr) / sizeof(arr[0]);
	maopao(arr, sz, sizeof(arr[0]), cmp);

	for (int p = 0; p < sz; p++)
	{
		printf("%d ", arr[p]);
	}
	return 0;
}	

