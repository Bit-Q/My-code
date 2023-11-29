#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
char* my_strstr(const char*p1,const char*p2)
{
	assert(p1&& p2);
	char* one = p1;
	char* two = p2;
	char* Begin = p1;//起始地址
	while (*Begin)
	{
		one = Begin;
		two = p2;
		while (*one != '\0' && *two != '\0' && *one == *two)
		{
			one++;
			two++;
		}
		if (*two == '\0')
		{
			return Begin;
		}
		Begin++;
	}
	return (char*)NULL;
}
int main()
{
	char arr1[] = "abbbcdef";
	char arr2[20] = "bbc";
	char*ret=my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("找不到该字符串");
	}
	else
		printf("%s", ret);

	return 0;
}