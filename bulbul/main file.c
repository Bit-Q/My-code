#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "dome.h"
int main()
{
	//Ä£ÄâÃ°ÅÝÅÅÐò
	int arr[] = { 456,789,786,45, 4512,4612,5401,4512,7854,0457 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	maopao(arr, sz, sizeof(arr[0]),cmp);

	for (int p = 0; p < sz; p++)
	{
		printf("%d\n",arr[p]);
	}
	return 0;
}



