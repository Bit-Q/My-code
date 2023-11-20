#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
#include <string.h>
int main()
{
	char ZH[20] = { 0 };//’À∫≈
	char MM[20] = { 0 };//√‹¬Î
	char YZ[] = "admin";

	//printf("«Î ‰»Î’À∫≈,√‹¬Î£¨”√ø’∏Òº‰∏Ù");
	scanf("%s %s", ZH, MM);
	if (strcmp(YZ, ZH) == 0 && strcmp(YZ, MM) == 0)
	{
		printf("Login Success!");
	}
	else
	{
		printf("Login Fail!");
	}

	return 0;
}