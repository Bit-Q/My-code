#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct student{    //定义信息类别
	char name[20];  //姓名
	int age;        //年龄
	char tel[20];   //电话
}stu;
typedef struct name_list{ //定义通讯录
	stu date[100];     //名单
	int cout;    //人员数量
}list;

void initialize(list* pc);//初始化通讯录
static int find(list* pc, char name[]);  //判断通讯录中是否有该成员

void help();
void add(list* pc);  //增加
void del(list* pc);  //删除
void mod(list* pc);  //查找
void ser(list* pc);  //修改

