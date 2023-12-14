
#define _CRT_SECURE_NO_WARNINGS 1
#include "message.h"


void help()//帮助菜单
{
	printf("************************\n");
	printf("*** 1.增加    2.删除 ***\n");
	printf("*** 3.查找    4.修改 ***\n");
	printf("*** 5.退出**************\n");
	printf("************************\n");
}

void initialize(list *pc)
{
	pc->cout = 0;
	memset(pc->date, 0, sizeof(pc->date));
}

void add(list* pc)//增加
{
	printf("请输入名字\n");
	scanf("%s", pc->date[pc->cout].name);
	printf("请输入年龄\n");
	scanf("%d", &pc->date[pc->cout].age);
	printf("请输入手机号\n");
	scanf("%s", pc->date[pc->cout].tel);
	pc->cout++;
	system("cls");
	printf("增加成功\n");

}

static int find(list* pc, char name[])  //判断是否能找到该成员
{
	assert(pc);
	int i = 0;
	if (pc->cout == 0) {
		return -2;
	}
	else
		for (i = 0; i <= pc->cout; i++)
		{
			if (0 == strcmp(pc->date[i].name, name))
				return i;
			else
				return -1;
		}
}

void del(list* pc) //删除
{
	if (pc->cout == 0)
		printf("该通讯录还没有成员，请先输入一个成员\n");
	else {
		char name[20] = { 0 };
		system("cls");
		printf("请输入您想要删除的成员名\n");
		assert(pc);
		int i = 0;
		scanf("%s", name);
		int pos = find(pc, name);
		if (pos == -1)
		{
			printf("找不到您想要删除的成员\n");
		}
		else if (pos == i)
		{
			for (i = pos; i < pc->cout; i++)
			{
				pc->date[i] = pc->date[i + 1];
			}
			pc->cout--;
			printf("删除成功\n");
		}
	}
}

void mod(list* pc) //查找
{
	assert(pc);
	printf("请输入您想要查找的成员名\n");
	char name[20] = { 0 };
	scanf("%s", name);
	int p=find(pc, name);
	if (p == -1)
	{
		printf("找不到该成员\n");
	}
	
	else if (p == -2) {
		printf("通讯录为空,请先添加一位成员再查找\n");
	}
	else
	{
		printf("姓名：%s\n", pc->date[p].name);
		printf("年龄：%d\n", pc->date[p].age);
		printf("电话号：%s\n", pc->date[p].tel);
	}
}
void ser(list*pc) //修改
{
	assert(pc);
	char name[20] = { 0 };
	printf("请输入您想要修改的成员名\n");
	scanf("%s", name);
	int p=find( pc, name);
	if (p == -1)
		printf("查无此人\n");
	else if (p == -2)
	{
		printf("通讯录为空\n");
	}
	else {
		printf("修改姓名\n");
		scanf("%s", pc->date[p].name);
		printf("修改年龄\n");
		scanf("%d", (&pc->date[p].age));
		printf("修改手机号\n");
		scanf("%s", pc->date[p].tel);
		printf("修改成功\n");
	}
}


