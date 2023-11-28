#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int*my_strncat(char*p,const char*p1,int cout)
{
	int sum = 0;
	for (int i = 0; i < cout; i++)
	{
		if (*p == *p1)
		{
			p++;
			p1++;
			sum++;
		}
		else if (*p < *p1)
		{
			return -1;
		}
		else
		{
			return 1;
		}
	}
	if (sum == cout)
	{
		return 0;
	}
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "abddef";
	int ret=my_strncat(arr1, arr2, 5);
	printf("%d", ret);
	return 0;
}