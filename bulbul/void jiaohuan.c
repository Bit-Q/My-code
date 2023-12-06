void jiaohuan(char* e1, char* e2, int i)
{
	for (int p = 0; p < i; p++)
	{
		char tmp = 0;
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}