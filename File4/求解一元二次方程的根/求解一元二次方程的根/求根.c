#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c;
	double delta;
	double x1, x2;
	printf("����a,b,c(a��Ϊ0�����ݼ��Կո����):");
	scanf("%d %d %d", &a,&b, &c);
	delta =b^2-4*a*c;
	if(delta >= 0)
	{
		x1= (-b+sqrt(b^2-4*a*c))/(2.0*a);
		x2= (-b-sqrt(b^2-4*a*c))/(2.0*a);
		printf("���̵ĸ�Ϊ��%f, %f.\n", x1, x2);
	}
	else
	{
		printf("������ʵ����.\n");
	}
	system("pause");
	return 0;
}

