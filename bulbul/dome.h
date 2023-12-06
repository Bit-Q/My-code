#pragma once
extern int cmp(const void* buf1, const void* buf2);
void jiaohuan(char* e1, char* e2, int i);
void maopao(void* pf, int sz, int width, int (*cmp)(const void* e1, const void* e2));

