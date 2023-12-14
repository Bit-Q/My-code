#define _CRT_SECURE_NO_WARNINGS 1
#include "message.h"

int main()
{
	list one;//通讯录
	initialize(&one);//初始化
	int input = 0;

	do 
	{
		help();//打印帮助菜单
		printf("请选择\n");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			add(&one);
			break;
		case 2:
			del(&one);
			break;
		case 3:
			mod(&one);
			break;
		case 4:
			ser(&one);
			break;
		case 5:
			printf("退出成功");
			input = 0;
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);
	return 0;
}
