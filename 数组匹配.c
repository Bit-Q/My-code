#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
#include <string.h>
int main()
{
	char ZH[20] = { 0 };//�˺�
	char MM[20] = { 0 };//����
	char YZ[] = "admin";

	//printf("�������˺�,���룬�ÿո���");
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