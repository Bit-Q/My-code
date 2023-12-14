
#define _CRT_SECURE_NO_WARNINGS 1
#include "message.h"


void help()//�����˵�
{
	printf("************************\n");
	printf("*** 1.����    2.ɾ�� ***\n");
	printf("*** 3.����    4.�޸� ***\n");
	printf("*** 5.�˳�**************\n");
	printf("************************\n");
}

void initialize(list *pc)
{
	pc->cout = 0;
	memset(pc->date, 0, sizeof(pc->date));
}

void add(list* pc)//����
{
	printf("����������\n");
	scanf("%s", pc->date[pc->cout].name);
	printf("����������\n");
	scanf("%d", &pc->date[pc->cout].age);
	printf("�������ֻ���\n");
	scanf("%s", pc->date[pc->cout].tel);
	pc->cout++;
	system("cls");
	printf("���ӳɹ�\n");

}

static int find(list* pc, char name[])  //�ж��Ƿ����ҵ��ó�Ա
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

void del(list* pc) //ɾ��
{
	if (pc->cout == 0)
		printf("��ͨѶ¼��û�г�Ա����������һ����Ա\n");
	else {
		char name[20] = { 0 };
		system("cls");
		printf("����������Ҫɾ���ĳ�Ա��\n");
		assert(pc);
		int i = 0;
		scanf("%s", name);
		int pos = find(pc, name);
		if (pos == -1)
		{
			printf("�Ҳ�������Ҫɾ���ĳ�Ա\n");
		}
		else if (pos == i)
		{
			for (i = pos; i < pc->cout; i++)
			{
				pc->date[i] = pc->date[i + 1];
			}
			pc->cout--;
			printf("ɾ���ɹ�\n");
		}
	}
}

void mod(list* pc) //����
{
	assert(pc);
	printf("����������Ҫ���ҵĳ�Ա��\n");
	char name[20] = { 0 };
	scanf("%s", name);
	int p=find(pc, name);
	if (p == -1)
	{
		printf("�Ҳ����ó�Ա\n");
	}
	
	else if (p == -2) {
		printf("ͨѶ¼Ϊ��,�������һλ��Ա�ٲ���\n");
	}
	else
	{
		printf("������%s\n", pc->date[p].name);
		printf("���䣺%d\n", pc->date[p].age);
		printf("�绰�ţ�%s\n", pc->date[p].tel);
	}
}
void ser(list*pc) //�޸�
{
	assert(pc);
	char name[20] = { 0 };
	printf("����������Ҫ�޸ĵĳ�Ա��\n");
	scanf("%s", name);
	int p=find( pc, name);
	if (p == -1)
		printf("���޴���\n");
	else if (p == -2)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else {
		printf("�޸�����\n");
		scanf("%s", pc->date[p].name);
		printf("�޸�����\n");
		scanf("%d", (&pc->date[p].age));
		printf("�޸��ֻ���\n");
		scanf("%s", pc->date[p].tel);
		printf("�޸ĳɹ�\n");
	}
}


