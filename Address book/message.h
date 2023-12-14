#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct student{    //������Ϣ���
	char name[20];  //����
	int age;        //����
	char tel[20];   //�绰
}stu;
typedef struct name_list{ //����ͨѶ¼
	stu date[100];     //����
	int cout;    //��Ա����
}list;

void initialize(list* pc);//��ʼ��ͨѶ¼
static int find(list* pc, char name[]);  //�ж�ͨѶ¼���Ƿ��иó�Ա

void help();
void add(list* pc);  //����
void del(list* pc);  //ɾ��
void mod(list* pc);  //����
void ser(list* pc);  //�޸�

