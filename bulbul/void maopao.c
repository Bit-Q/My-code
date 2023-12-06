void maopao(void* pf, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (; i < sz - 1; i++)
	{
		int sum = 1;
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)pf + j * width, (char*)pf + (j + 1) * width) > 0)
			{
				jiaohuan((char*)pf + j * width, (char*)pf + (j + 1) * width, width);
				sum = 0;
			}
		}
		if (sum == 1)
		{
			break;
		}
	}
}