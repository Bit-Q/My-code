#define _CRT_SECURE_NO_WARNINGS 1
#include "message.h"

int main()
{
	list one;//ͨѶ¼
	initialize(&one);//��ʼ��
	int input = 0;

	do 
	{
		help();//��ӡ�����˵�
		printf("��ѡ��\n");
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
			printf("�˳��ɹ�");
			input = 0;
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);
	return 0;
}
