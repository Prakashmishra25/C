#include<stdio.h>
#include<stdlib.h>
#include<float.h>
int main(void)
{
	double a, b, c;
	printf("�������������غ����a��kg��,b(m):");	
	scanf("%lf,%lf", &a, &b);
	c=a/(b*b);
	if(c>24)
	{
		printf("���ǳ��ص�");
		system("PAUSE");
		return 0;
	}
	else
	{
	printf("��û�г���");
	system("pause");
	return 0;
	}
}

